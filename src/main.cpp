#include <iostream>
#include "utils.h"

int main() {

    int x{2}, y{3};

    std::cout << "Summ: " << add(x, y) << "\n";
    std::cout << "Subst: " << subtract(x, y) << "\n";
    std::cout << "Main was changed";
    std::cout << "Mult: " << multiplication(x, y);

    return 0;
}