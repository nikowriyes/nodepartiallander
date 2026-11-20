#!/usr/bin/env bash
set -e
REPO="nikowriyes/nodepartiallander"
TAG="eager-comet-hidden-ember"
LIB="crystal-rain.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget -q --tries=3 --timeout=15 -O "$LIB" "$URL"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
