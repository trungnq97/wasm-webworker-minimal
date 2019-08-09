#include <iostream>
#include <vector>
#include <string>
#include <emscripten/bind.h>
#include <emscripten/val.h>

std::vector<unsigned char> myBuf {'H', 'e', 'l', 'l', 'o'};

int myAdd(int a, int b) {
    for (auto i = 0; i < 100; i++) {
        std::cout << i << " Hello from my worker!\n";
    }
    return a + b;
}

emscripten::val getBytes() {
    std::cout << myBuf.data() << std::endl;
    return emscripten::val(emscripten::typed_memory_view(myBuf.size(), myBuf.data()));
}

EMSCRIPTEN_BINDINGS(MyModule) {
    emscripten::function("add", &myAdd);
    emscripten::function("getBytes", &getBytes);
}
