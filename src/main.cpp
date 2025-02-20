#include <iostream>
#include "utils.h"

int main() {

    int x{2}, y{3};

    std::cout << "Summ: " << add(x, y) << "\n";
    std::cout << "Subst: " << subtract(x, y);

    return 0;
}