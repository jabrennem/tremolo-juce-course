#include <iostream>

int main() {
    #if __cplusplus >= 202002L
        std::cout << "C++20 is supported" << std::endl;
    #else
        std::cout << "C++20 is NOT supported" << std::endl;
    #endif
    return 0;
}