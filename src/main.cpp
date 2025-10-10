#include <iostream>
#include "utils.h"

/**
 * @brief Main function to demonstrate the utility functions.
 *
 * This program demonstrates the usage of add(), subtract(), and multiplication()
 * functions from utils.h. It initializes two integers, performs the operations,
 * and prints the results to the console.
 *
 * @return 0 on successful execution.
 */
int main() {

    int x{2}, y{3};

    std::cout << "Summ: " << add(x, y) << "\n";
    std::cout << "Subst: " << subtract(x, y) << "\n";
    std::cout << "Main was changed";
    std::cout << "Mult: " << multiplication(x, y);

    return 0;
}