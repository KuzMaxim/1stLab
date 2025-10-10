# MyCalculator

A simple C++ command-line application that demonstrates basic arithmetic operations.

## Purpose

This project serves as a basic example of a C++ project structured with a `main` application file, a utility library (`utils.h` and `utils.cpp`), and a `CMakeLists.txt` for building. It is intended to be a learning tool for understanding project structure, build systems, and basic C++ programming concepts.

## Features

The calculator provides the following arithmetic functions:
- **Addition**: `add(a, b)`
- **Subtraction**: `subtract(a, b)`
- **Multiplication**: `multiplication(a, b)`

## Building the Project

This project uses CMake for building. Follow these steps to compile the application:

1.  **Create a build directory:**
    It is best practice to create a separate directory for the build artifacts.
    ```bash
    mkdir build
    cd build
    ```

2.  **Run CMake:**
    From within the `build` directory, run CMake to generate the build files.
    ```bash
    cmake ..
    ```

3.  **Compile the project:**
    Use `make` to compile the source code.
    ```bash
    make
    ```

## Running the Application

After a successful build, the executable `MyCalculator` will be located in the `build` directory. To run it, execute the following command from the `build` directory:

```bash
./MyCalculator
```

The program will output the results of the demonstrated `add`, `subtract`, and `multiplication` operations.

## Code Documentation

The source code is documented using Doxygen-style comments. You can generate HTML documentation by running Doxygen if you have it installed.