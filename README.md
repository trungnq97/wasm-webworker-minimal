# wasm-webworker-minimal
A minimal example of using WASM in web worker

* Build wasm `em++ -std=c++17 -O3 --bind -o main.js main.cpp`
* Serve `python -m SimpleHTTPServer`
* Open `http://localhost:8000`, check *Console* to see output.