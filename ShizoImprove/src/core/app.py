from flask import Flask, jsonify, request
from flask_cors import CORS
from flask_limiter import Limiter
from flask_limiter.util import get_remote_address
import logging
import os
from datetime import datetime
from config import Config

app = Flask(__name__)
app.config.from_object(Config)

# ==========================================
# CORS Configuration
# ==========================================
CORS(app, resources={
    r"/api/*": {
        "origins": app.config['CORS_ORIGINS'],
        "methods": ["GET", "POST", "PUT", "DELETE", "PATCH"],
        "allow_headers": ["Content-Type", "Authorization"],
        "max_age": 86400
    }
})

# ==========================================
# Rate Limiting
# ==========================================
limiter = Limiter(
    app=app,
    key_func=get_remote_address,
    default_limits=["100 per minute"],
    storage_uri="memory://"
)

# ==========================================
# Logging Configuration
# ==========================================
logging.basicConfig(
    level=app.config['LOG_LEVEL'],
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
logger = logging.getLogger(__name__)

# ==========================================
# Request/Response Middleware
# ==========================================
@app.before_request
def before_request():
    logger.info(f"Request: {request.method} {request.path}")

@app.after_request
def after_request(response):
    logger.info(f"Response: {response.status_code}")
    return response

# ==========================================
# API Routes
# ==========================================
from api import routes
app.register_blueprint(routes.bp, url_prefix='/api/v1')

# ==========================================
# Health Check
# ==========================================
@app.route('/health')
def health():
    return jsonify({
        'status': 'healthy',
        'timestamp': datetime.utcnow().isoformat(),
        'uptime': str(datetime.utcnow() - app.config['START_TIME']),
        'version': '2.0.0'
    })

# ==========================================
# API Documentation
# ==========================================
@app.route('/api-docs')
def api_docs():
    return jsonify({
        'name': os.getenv('APP_NAME', 'TetraShop API'),
        'version': '2.0.0',
        'endpoints': {
            '/api/v1': 'API endpoints',
            '/health': 'Health check',
            '/api-docs': 'This documentation'
        }
    })

# ==========================================
# Error Handlers
# ==========================================
@app.errorhandler(404)
def not_found(e):
    return jsonify({'error': 'Not Found', 'message': str(e)}), 404

@app.errorhandler(500)
def server_error(e):
    logger.error(f"Server error: {e}")
    return jsonify({'error': 'Internal Server Error'}), 500

@app.errorhandler(429)
def rate_limit_exceeded(e):
    return jsonify({'error': 'Rate limit exceeded', 'message': str(e)}), 429

if __name__ == '__main__':
    app.run(
        host='0.0.0.0',
        port=app.config['PORT'],
        debug=app.config['DEBUG']
    )
