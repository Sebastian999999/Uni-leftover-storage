#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
double memory = 0.0;

void removeChar(char *str, char c) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

void displayHelp() {
    printf("Calculator Functions:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("# : Square Root\n");
    printf("^ : Square\n");
    printf("s/Store : Store answer\n");
    printf("m : Memory (Recall stored answer)\n");
    printf("r/Refresh : Refresh (Clear stored memory)\n");
    printf("h/Help : Help (Display available functions)\n");
    printf("q/Quit : Quit\n");
    printf("===========================\n");
}

double calculate(double num1, double num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            printf("Invalid operator.\n");
            exit(1);
    }
}

bool operatornumbercount(char *expression) {
    int i = 0;
    int exp = 0;
    int num = 0;
    while(expression[i] != '\0')
    {
        if (expression[i] == '+' || expression[i] == '-' ||
            expression[i] == '*' || expression[i] == '/' ||
            expression[i] == '#' || expression[i] == '^')
        {
            if(expression[i+1]>=48 && expression[i+1]<=57 || 
            expression[i+1]=='.' || expression[i+1]=='m' || 
            expression[i+1]=='M')
            {
                num++;
            }
            exp++;
        }
        if ((expression[i]>=48 && expression[i]<=57) && 
            (expression[i+1] == '+' || expression[i+1] == '-' ||
            expression[i+1] == '*' || expression[i+1] == '/'  ||
            expression[i+1] == '#' || expression[i+1] == '^') || 
            expression[i]=='.' || expression[i]=='m' || expression[i]=='M')
            {
                num++;
            }
        i++;
    }

    if(exp > 1 || exp == 0 || num > 1 || num == 0)
    return false;
    else
    return true;
}

double evaluateExpression(char* expression , double memory , double answer) {
    double result = 0.0;
    double currentNumber = 0.0;
    char currentOperator = '+';
    char defaultOperator = '+';
    int length = strlen(expression);
    int i = 0;
    bool opernumcount = operatornumbercount(expression);
    while (i < length) {
        if (isdigit(expression[i]) || expression[i]=='m' || expression[i]=='.') {
            currentNumber = 0.0;
            bool floatingpoint = false;
            int j = 1;
            while (i < length && (expression[i] != 'm' && isdigit(expression[i])) || expression[i] == '.') {
                if (expression[i] != '.' && floatingpoint == false)
                {
                    if(i!=0&&expression[i-1]=='-')
                    currentNumber = -((currentNumber * 10) + (expression[i] - '0'));
                    else
                    currentNumber = (currentNumber * 10) + (expression[i] - '0');
                }
                else if (expression[i] == '.')
                {
                    floatingpoint = true ;
                }
                else if(isdigit(expression[i]))
                {
                    currentNumber = currentNumber + ((expression[i] - '0') / pow(10,j));
                    j++;
                }
                i++;
            }
            if (expression[i]=='m')
            {
                currentNumber = memory;
                i++;
            }
        } else if (expression[i] == '#') {
            // Handle square root operator
            i++;
            currentNumber = sqrt(currentNumber);
        } else if (expression[i] == '^') {
            // Handle square operator
            i++;
            currentNumber = currentNumber * currentNumber;
        } else if (expression[i] == '*' || expression[i] == '/') {
            // Update the current operator
            currentOperator = expression[i];
            i++;
            double nextNumber = 0.0;
            bool floatingpoint = false;
            int j = 1;
            while (i < length && (isdigit(expression[i]) && expression[i] != 'm' || expression[i] == '.')) {
                if (expression[i] != '.' && floatingpoint == false)
                {
                    nextNumber = (nextNumber * 10) + (expression[i] - '0');
                }
                else if (expression[i] == '.')
                {
                    floatingpoint = true ;
                }
                else if (isdigit(expression[i]))
                {
                    nextNumber = nextNumber + ((expression[i] - '0') / pow(10,j));
                    j++;
                }
                i++;
            }
            if (expression[i]=='m' || expression[i]=='M')
            {
                nextNumber = memory;
                i++;
            }
            if (expression[i]=='^')
            {
                nextNumber = nextNumber * nextNumber;
                i++;
            }
            else if (expression[i]=='#')
            {
                nextNumber = sqrt(nextNumber);
                i++;
            }
            // Apply the current operator to the result and next number
            if(opernumcount==false)
            currentNumber = calculate(currentNumber, nextNumber, currentOperator);
            else
            currentNumber = calculate(answer, nextNumber, currentOperator);
        } else if (expression[i] == '-' || expression[i] == '+') {
            // Apply the current operator to the result
            currentOperator = expression[i];

            if(opernumcount==false)
            result=calculate(currentNumber, result, defaultOperator);
            else
            result=calculate(currentNumber, answer, defaultOperator);
            //printf("Result before : %f\n" , result);
            i++;
        } else {
            printf("Invalid character: %c\n", expression[i]);
            exit(1);
        }
    }

    result = calculate(result, currentNumber, defaultOperator);

    return result;
}

int main() {
    char input[100];
    double answer = 0.0;
    printf("Non-Scientific Calculator\n");
    printf("Supported operations: +, -, *, /, #, ^, m, r, h, s, q\n");
    printf("Enter 'q' to quit.\n");
    printf("Enter 'h' for help.\n");
    printf("===========================\n");

    while (1) {
        printf("Enter an expression: ");
        fgets(input, sizeof(input), stdin);

        // Remove newline character from input
        input[strcspn(input, "\n")] = '\0';

        removeChar(input,' ');// Remove spaces from input
        if (strcmp(input, "quit") == 0 || strcmp(input, "Quit") == 0 ||
            strcmp(input, "q") == 0 || strcmp(input, "Q") == 0) {
            printf("Goodbye!\n");
            break;
        }

        if (strcmp(input, "help") == 0 || strcmp(input, "Help") == 0 ||
            strcmp(input, "h") == 0 || strcmp(input, "H") == 0) {
            displayHelp();
            continue;
        }

        if (strcmp(input, "refresh") == 0 || strcmp(input, "Refresh") == 0 ||
            strcmp(input, "r") == 0 || strcmp(input, "R") == 0) {
            memory = 0.0;
            answer = 0.0;
            printf("Memory refreshed.\n");
            continue;
        }

        if (strcmp(input, "s") == 0 || strcmp(input, "S") == 0 || 
            strcmp(input, "store") == 0 || strcmp(input, "Store") == 0) {
            memory = answer;
            printf("Answer Stored in Memory.\n");
            //printf("Memory: %.6lf\n", memory);
            continue;
        }
        double result = evaluateExpression(input,memory,answer);

        if ((result-(int)result) > .000000f || (result-(int)result) < .000000f)
        printf("Result: %.6lf\n", result);
        else
        printf("Result: %.lf\n", result);

        answer = result;
    }

    return 0;
}
