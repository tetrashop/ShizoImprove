from flask import Flask, jsonify, request
from flask_cors import CORS
import logging

app = Flask(__name__)
CORS(app)

# Configure logging
logging.basicConfig(level=logging.INFO)

@app.route('/')
def home():
    return jsonify({
        'message': '🚀 API is running!',
        'version': '1.0.0',
        'status': 'active'
    })

@app.route('/health')
def health():
    return jsonify({'status': 'healthy'})

@app.route('/api/v1/ping')
def ping():
    return jsonify({'pong': True})

@app.errorhandler(404)
def not_found(e):
    return jsonify({'error': 'Not found'}), 404

@app.errorhandler(500)
def server_error(e):
    return jsonify({'error': 'Internal server error'}), 500

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000, debug=True)
