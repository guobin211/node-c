/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string node_c::Greeter::greeting() {
    return std::string("Hello, World!");
}

int main () {
    node_c::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;
    return 0;
}
