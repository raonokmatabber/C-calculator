#include <stdio.h>

int main() 
{
    char operator;
    double firstNumber, secondNumber;

    // A welcome message and prompt for user input
            printf("Welcome to the simple command-line calculator\n");
            printf("Enter an expression (e.g., 5 + 3, or 12.5 * 4): ");

    // Read the numbers and the operator from the user
            scanf("%lf %c %lf", &firstNumber, &operator, &secondNumber);

    // Use a switch statement to perform the calculation based on the operator
            switch (operator) 
                    {
                              case '+':
                                  printf("Result: %.2lf\n", firstNumber + secondNumber);
                                  break;
                              case '-':
                                  printf("Result: %.2lf\n", firstNumber - secondNumber);
                                  break;
                              case '*':
                                  printf("Result: %.2lf\n", firstNumber * secondNumber);
                                  break;
                              case '/':
                                  // Check for division by zero before performing the operation
                                  if (secondNumber != 0.0) {
                                      printf("Result: %.2lf\n", firstNumber / secondNumber);
                                  } else {
                                      printf("Error: Division by zero is not allowed.\n");
                                  }
                                  break;
                                          // Default case for invalid operators
                                                    default:
                                                        printf("Error: Invalid operator.\n");
                                                        break;
                    }

    return 0; // Indicate successful program execution
}
