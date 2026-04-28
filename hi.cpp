#include <iostream>
#include <windows.h>
#include <random>
int main() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist100(1,1000);
    while (true) {
    SetCursorPos(dist100(rng),dist100(rng));
    Sleep(100);
    }
}
