#include <iostream>
#include <memory>
#include "FrontEnd.h"

int main() {
    int result = 0;
    try {
        auto front_end = std::make_shared<FrontEnd>();
    }
    catch (std::runtime_error& e) {
        std::cout << "\nFailed. Exception = " << e.what();
        result = 1; // Failed
    }
    std::cout << "\nDone!";
    std::cout << "\n";
    return result;
}