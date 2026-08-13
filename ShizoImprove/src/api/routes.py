from flask import Blueprint, jsonify, request
from datetime import datetime

bp = Blueprint('api', __name__)

@bp.route('/')
def index():
    return jsonify({
        'message': '🚀 TetraShop API v2.0.0',
        'status': 'running',
        'timestamp': datetime.utcnow().isoformat()
    })

@bp.route('/ping')
def ping():
    return jsonify({'pong': True, 'timestamp': datetime.utcnow().isoformat()})

@bp.route('/echo', methods=['POST'])
def echo():
    data = request.get_json()
    return jsonify({
        'echo': data,
        'received_at': datetime.utcnow().isoformat()
    })
