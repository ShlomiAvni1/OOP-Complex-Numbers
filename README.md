# Complex Numbers Library (C++ OOP)

This repository contains a professional C++ implementation of a **Complex Numbers** library, developed using Object-Oriented Programming (OOP) principles. The project focuses on modularity, encapsulation, and accurate mathematical representations.

## Features
* **Encapsulation**: Private data members (`_re`, `_im`) accessed via secure getters and setters to ensure data integrity.
* **Constructors**: Includes default, parameterized, and copy constructors for flexible object initialization.
* **Mathematical Operations**:
    * **Arithmetic**: Support for adding and subtracting complex numbers.
    * **Polar Representation**: Built-in functions to calculate the Absolute Value (magnitude) and Phase (angle in degrees).
* **Formatted Output**: A specialized `print()` function that handles various cases (e.g., zero real/imaginary parts, negative values) to ensure a clean and professional mathematical display.

## Mathematical Formulas Used
* **Absolute Value (Magnitude)**: $r = \sqrt{re^2 + im^2}$
* **Phase (Degrees)**: $\theta = \text{atan2}(im, re) \cdot \left(\frac{180}{\pi}\right)$

## File Structure
* `src/Complex.h`: Class definition and method prototypes.
* `src/Complex.cpp`: Implementation of the class logic and mathematical calculations.
* `src/main.cpp`: A comprehensive testbench demonstrating library usage and edge cases.

## Example Usage
The following example demonstrates how to initialize numbers, perform calculations, and display results:

```cpp
#include "Complex.h"
#include <iostream>

int main() {
    // 1. Initialize complex numbers using parameterized constructor
    Complex z1(3, 4);   // Represents: 3 + 4i
    Complex z2(1, -2);  // Represents: 1 - 2i

    // 2. Display initial numbers
    std::cout << "z1: "; z1.print();
    std::cout << "z2: "; z2.print();

    // 3. Perform addition and subtraction
    Complex sum = z1.add(z2); 
    Complex diff = z1.sub(z2);

    std::cout << "\nResult of Addition: ";
    sum.print(); // Expected Output: 4 + 2i (with magnitude and phase)

    // 4. Accessing properties directly
    std::cout << "\nz1 Magnitude: " << z1.abValue() << std::endl;
    std::cout << "z1 Phase: " << z1.phase() << " degrees" << std::endl;

    return 0;
}