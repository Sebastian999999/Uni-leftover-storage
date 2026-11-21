#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
//global variables.
double CalculatorMemory;
int idxOperand = -1;
int IdxOperator = -1;

//help function.
void helpMenu();

//setpriority function.
int setPriorityOfOperators(char Opr)
{

    if (Opr == '#' || Opr == '^')
    {
        return 3;
    }
    else if (Opr == '+' || Opr == '-')
    {
        return 1;
    }
    else if (Opr == '*' || Opr == '/')
    {
        return 2;
    }

}

//check Operand function.
double verifyOperands(char* inputStr, int* temp, int val)
{
    int tempVal = *(temp);
    char value[256];
    bool detected = false;

    while (tempVal < val)
    {

        switch (inputStr[tempVal])
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case '#':
        case ' ':

            detected = true;
            break;
        }

        //checking detected operators.
        if (detected)
        {
            break;
        }

        value[tempVal - *(temp)] = inputStr[tempVal];
        tempVal++;

    }

    value[tempVal - *(temp)] = '\0';
    *temp = tempVal;

    if (!strcmp(value, "MEMORY") || !(strcmp(value, "memory")))
    {
        return CalculatorMemory;
    }

    return atof(value);
}

//isOperand function.
int isValidOperand(char values)
{
    return (((values >= 48) && (values <= 57)) || (values == 'm') || (values == 'M') || (values == '.')) ? 1 : 0;
}

//check Operator function.(changed)
int isValidOperator(char values)
{
    return ((values == '+') || (values == '-') || (values == '*') || (values == '/') || (values == '^') || (values == '#')) ? 1 : 0;
}

//global variables.
double Expressions[512];
char OperatorsInExpression[512];

//calculate expression function.(changed)
double solveEquation(char Operation)
{

    double num1, num2;
    num1 = Expressions[idxOperand--];

    switch (idxOperand)
    {
    case -1:
        num2 = 0;
        break;

    default:
        num2 = Expressions[idxOperand--];
        break;
    }

    //checking operators and calculating result.
    if (Operation == '+')
    {
        return (num1 + num2);
    }
    else if (Operation == '-')
    {
        return (num2 - num1);
    }
    else if (Operation == '*')
    {
        return (num1 * num2);
    }
    else if (Operation == '/')
    {
        return (num2 / num1);
    }
    else if (Operation == '^')
    {
        if (num2 != 0)
        {
            Expressions[++idxOperand] = num2;
        }
        return pow(num1, 2);

    }
    else if (Operation == '#')
    {
        if (num2 != 0)
        {
            Expressions[++idxOperand] = num2;
        }

        return sqrt(num1);
    }
}

//calculate function.
void calculateValues(char Operation) {

    double val = 0;

    switch (IdxOperator)
    {
    case -1:
        return;

    default:
        break;
    }


    if (IdxOperator == -1)
    {
        return;
    }

    switch (Operation)
    {

    case 'y':

        //calculating expression.
        for (int i = 0; IdxOperator != -1; i++)
        {
            val = solveEquation(OperatorsInExpression[IdxOperator--]);
            Expressions[++idxOperand] = val;
        }

    default:


        if (IdxOperator < 1)
        {
            return;
        }

        int operatorPriority = setPriorityOfOperators(OperatorsInExpression[IdxOperator]);
        int previousOperatorPriority = setPriorityOfOperators(OperatorsInExpression[IdxOperator - 1]);

        switch (operatorPriority > previousOperatorPriority)
        {
        case 1:

            val = solveEquation(OperatorsInExpression[IdxOperator--]);
            Expressions[++idxOperand] = val;
            break;

        default:

            break;
        }

        break;
    }
}

//main function.
int main()
{
    char isValidAnswer = 'n';
    double calculatorAnswer = 0;

    printf("\nType \HELP\ or enter a mathematical expression\n\n");
    char isFull = 'n';
    int i, j, n;
    char prevVal;
    char Operations[128], values[128];
    
    //calculating values.
    for(int i = 0; true; i++)
    {
        printf("Calc:\\ > ");
        fgets(Operations, 512, stdin);
        Operations[strlen(Operations) - 1] = '\0';

        if (!strcmp(Operations, ""))
        {
            calculatorAnswer = 0;
            printf("\nType \HELP\ or enter a mathematical expression\n\n");
            continue;
        }

        if (strcmp(Operations, "help") == 0 || strcmp(Operations, "Help") == 0 || strcmp(Operations, "HELP") == 0) 
        {
            helpMenu();
            continue;
        }

        //checking store command.
        switch (strcmp(Operations, "store")) 
        {
        case 0:

            switch (isValidAnswer) 
            {

            case 'y':

                CalculatorMemory = calculatorAnswer;
                isFull = 'y';
                printf("ANSWER STORED IN MEMORY\n");
                break;

            default:

                printf("NO ANSWER TO STORE IN MEMORY\n");
                break;
            }
            continue;

        default:
            break;
        }


        //checking reset command.
        switch (strcmp(Operations, "reset")) 
        {
        case 0:

            printf("MEMORY RESET Successfully.\n");
            CalculatorMemory = 0;
            isFull = 'n';
            continue;

        default:

            break;
        }


        //checking exit command.
        switch (strcmp(Operations, "exit")) {
        case 0:

            printf("\nThank you for using the calculator :)\n");
            return 0;

        default:
            
            break;
        }


        i = 0;
        n = strlen(Operations);

        while (1)
        {
            //cheking operands.
            if (isValidOperand(Operations[i])) {

                Expressions[++idxOperand] = verifyOperands(Operations, &i, n);
                prevVal = 'e';

            }
            //checking operators.
            else if (isValidOperator(Operations[i]))
            {

                if (idxOperand == -1)
                {
                    Expressions[++idxOperand] = calculatorAnswer;
                }

                OperatorsInExpression[++IdxOperator] = Operations[i];
                i++;
                prevVal = 'o';

            }

            if (Operations[i] == ' ')
            {

                if (prevVal == 'o')
                {
                    char op = OperatorsInExpression[IdxOperator--];
                    calculateValues('y');
                    OperatorsInExpression[++IdxOperator] = op;
                }
                else
                {
                    calculateValues('y');
                }
                i++;
                continue;

            }

            if (i == n)
            {

                calculateValues('y');
                calculatorAnswer = Expressions[idxOperand--];
                isValidAnswer = 'y';
                break;

            }

            calculateValues('n');
        }

        if ((calculatorAnswer-(int)calculatorAnswer) > .000000f || (calculatorAnswer-(int)calculatorAnswer) < .000000f)
        printf("Result: %.6lf\n", calculatorAnswer);
        else
        printf("Result: %.lf\n", calculatorAnswer);
        //printf("Answer:\\ > % .6f\n\n", calculatorAnswer);
    }
}


//help function.
void helpMenu() {

    printf("\n");
    printf(" % -15s Exits this program.\n", "EXIT");
    printf(" % -15s Displays information about this program.\n", "HELP");
    printf(" % -15s As part of a mathematical expression the term MEMORY\n", "MEMORY");
    printf(" % -15s is substituted by the value stored in memory.Otherwise\n", "");
    printf(" % -15s the value stored in memory is displayed on - screen.\n", "");
    printf(" % -15s Erases stored in memory and returns calculator to its\n", "RESET");
    printf(" % -15s Saves current answer to memory.\n\n", "STORE");
    printf(" % -15s % -15s % -15s\n", "OPERATOR", "DESCRIPTION", "SYNTAX");
    printf(" % -15s % -15s % -15s\n", " + ", "addition", "[a + b | +a]");
    printf(" % -15s % -15s % -15s\n", " - ", "subtraction", "[a - b | -a]");
    printf(" % -15s % -15s % -15s\n", " * ", "multiplication", "[a * b | *a]");
    printf(" % -15s % -15s % -15s\n", " / ", "division", "[a / b | /a]");
    printf(" % -15s % -15s % -15s\n", " ^ ", "sqr(x)", "a ^ ");
    printf(" % -15s % -15s % -15s\n", " # ", "sqrt(x)", "a # ");
    printf("Example:\ta ^ +b#  / MEMORY(spacing optional)\n");
}