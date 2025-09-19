# C-calculator

A simple command-line calculator program written in C that handles basic arithmetic operations. This project serves as an introduction to fundamental programming concepts like user input, conditional logic, and basic arithmetic in C.

### **Features**
- Performs addition, subtraction, multiplication, and division.
- Handles both integers and floating-point numbers.
- Provides an error message for division by zero.

### **How to Compile and Run**
To compile the program, use a C compiler like GCC. Open your terminal or command prompt, navigate to the directory where the `calculator.c` file is located, and run the following command:

`gcc calculator.c -o calculator
`
This command compiles the source code and creates an executable file named `calculator`.

To run the program, execute the following command:

`./calculator`

### **How to Use**
When you run the program, it will prompt you to enter a mathematical expression. The format is a number, followed by an operator, followed by another number.

Example:

`Enter an expression (e.g., 5 + 3): 5.5 * 2
Result: 11.00`

### **Future Improvements**
- Add support for more complex operations (e.g., exponents, square roots).
- Implement order of operations (PEMDAS).
- Create a user-friendly interface.
