#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber;

    while (1) {
        printf("Enter an operator (+, -, *, /) or Q to quit: ");
        scanf(" %c", &operator);

        if (operator == 'Q' || operator == 'q') {
            printf("Calculator exiting.\n");
            break;
        }

        printf("Enter first operand: ");
        scanf("%lf", &firstNumber);
        printf("Enter second operand: ");
        scanf("%lf", &secondNumber);

        switch (operator) {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
                break;
            case '/':
                if(secondNumber != 0.0)
                    printf("%.1lf / %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
                else
                    printf("Division by zero error!\n");
                break;
            default:
                printf("Invalid operator!\n");
        }
    }

    return 0;
}
