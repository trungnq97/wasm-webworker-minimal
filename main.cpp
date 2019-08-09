#include <iostream>
#include <emscripten/bind.h>

int myAdd(int a, int b) {
    for (auto i = 0; i < 100; i++) {
        std::cout << i << " Hello from my worker!\n";
    }
    return a + b;
}

EMSCRIPTEN_BINDINGS(MyModule) {
    emscripten::function("add", &myAdd);
}
