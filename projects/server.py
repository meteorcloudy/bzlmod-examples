#!/usr/bin/env python3
import http.server
import socketserver
import os

PORT = 51213

web_dir = os.path.join(os.path.dirname(__file__), 'archives')
os.chdir(web_dir)

Handler = http.server.SimpleHTTPRequestHandler
httpd = socketserver.TCPServer(("", PORT), Handler)
print("serving at port", PORT)
httpd.serve_forever()

