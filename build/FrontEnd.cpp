//
// Created by kjell-olovhogdahl on 7/25/2016.
//

#include "FrontEnd.h"
#include <iostream>

int FrontEnd<Console>::run() {
    int result = 0;
    std::cout << "\nTrudelutt>";
    std::cout << R"(Enter "quit" to exit)";
    bool done = false;
    std::string sCommandLine;
    while (!done) {
        std::cout << "\nTrudelutt>";
        std::getline(std::cin,sCommandLine);
        if (sCommandLine == "") {
            std::cout << R"(Enter "quit" to exit)";
        }
        else done = (sCommandLine.find("quit") != std::string::npos);
    }
    return result;
}
