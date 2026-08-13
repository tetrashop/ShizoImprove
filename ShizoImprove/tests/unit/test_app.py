import pytest
from src.core.app import app

def test_index():
    with app.test_client() as client:
        response = client.get('/api/v1/')
        assert response.status_code == 200
        assert response.json['status'] == 'running'

def test_ping():
    with app.test_client() as client:
        response = client.get('/api/v1/ping')
        assert response.status_code == 200
        assert response.json['pong'] is True

def test_health():
    with app.test_client() as client:
        response = client.get('/health')
        assert response.status_code == 200
        assert response.json['status'] == 'healthy'
