#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

float addition(char *numa , char *numb)
{
    float ans = 0.0f;
    ans = atof(numa) + atof(numb);
    return ans;
}

float subtraction(char *numa , char *numb)
{
    float ans = 0.0f;
    ans = atof(numa) - atof(numb);
    return ans;
}

float multiplication(char *numa , char *numb)
{
    float ans = 0.0f;
    ans = atof(numa) * atof(numb);
    return ans;
}

float division(char *numa , char *numb)
{
    float ans = 0.0f;
    ans = atof(numa) / atof(numb);
    return ans;
}

float square(char *num)
{
    float ans = 0.0f;
    ans = pow(atof(num),2);
    return ans;
}

float squareroot(char *num)
{
    float ans = 0.0f;
    ans = sqrt(atof(num));
    return ans;
}

float precision()
{

}

float * numbers (char * expression)
{
    float *numbers = (float *) malloc (100 * sizeof(float));
    char *number = (char * ) malloc (100 * sizeof(char));
    int k = 0;
    for (int i = 0 , j = 0 ;  expression[i] != '\0' ; i++)
    {
        if ((expression[i]>=48 && expression[i] <=57) || expression[i] == '.')
        {
            number[j] = expression[i];
            j++;
        }
        if (expression[i] != '.' && (expression[i] > 57 || expression[i] < 48) && number != NULL)
        {
            numbers[k] = atof(number);
            k++;
            j=0;
            number = NULL;
            number = (char * ) malloc (100 * sizeof(char));
        }
    }
    if (number!=NULL)
    {
        numbers[k]=atof(number);
    }
    free(number);
    return numbers;
}

char * operators (char * expression)
{
    char *operators = (char *) malloc (100 * sizeof(char));
    for(int i = 0 , j = 0 ; expression[i] != '\0' ; i++)
    {
        if (expression[i] != '.' && expression[i] > 57 && expression[i] < 48)
        {
            operators[j] = expression[i];
            j++;
        }
    }
    return operators;
}

float calculate(char * expression , float ans)
{
    float a = 0 ;
    float b = 0 ;
    float * nums = (float*)malloc(100 * sizeof(float));
    float ** numbers1 = (float **) malloc (6 * sizeof(float*));
    char * operator = (char *) malloc (100 * sizeof(float));
    char * numa = (char *) malloc (sizeof(char) * 100) ;
    char * numb = (char *) malloc (sizeof(char) * 100) ;
    int i = 0;
    int j = 0;
    int k = 0;
    char ** numoperators = (char **) malloc(6*sizeof(char*));
    for(int i = 0 ; i < 6 ; i++)
    {
        numoperators[i] = (char *) malloc (100000 * sizeof(char));
        numbers1[i] = (float *) malloc (100 * sizeof(float));
    }
    for (int i = 0 ; i < 6 ; i++)
    {
        for (int j = 0 , l = 0; expression[j] != '\0' ;j++)
        {
            if (i==0)
            {
                if (expression[j]=='#' || (expression[j] >= 48 && expression[j]<=57))
                {
                    if (expression[j] != '#')
                    {
                        numa[k] = expression[j];
                    }
                    else
                    {
                        //numa[k]='|';
                        //for (int m = 0 ; m <= k ; m++ , l++)
                        //numoperators[i][l] = numa[m];
                        numbers1[i][l]=squareroot(numa);
                        printf("numoperators = %f\n" , numbers1[i][l]);
                        l++;
                    }
                    k++;
                }
                else
                {
                    k = 0;
                    numa = NULL;
                    numa = (char *) malloc (sizeof(char) * 100) ;
                }
                printf("numa=%s\n",numa);
            }
            else if (i == 1)
            {
                if (expression[j] == '^' || (expression[j] >= 48 && expression[j]<=57))
                {
                    if (expression[j] != '^')
                    {
                        numa[k] = expression[j];
                    }
                    else
                    {
                        numbers1[i][l]=square(numa);
                        printf("numoperators = %f\n" , numbers1[i][l]);
                        //printf("numoperators = %s\n" , numoperators[i]);
                    }
                    k++;
                }
                else
                {
                    k = 0;
                    numa = NULL;
                    numa = (char *) malloc (sizeof(char) * 100) ;
                }
                //printf("numa=%s\n",numa);
            }
            else if (i == 2)
            {
                if (expression[j] == '/' || (expression[j] >= 48 && expression[j]<=57))
                {
                    if (expression[j]!='/')
                    {
                        numa[k] = expression[j]; 
                    }
                    else
                    {
                        printf("numa = %s\n" , numa);
                    }
                    k++;
                }
                else
                {
                    k = 0;
                    numa = NULL;
                    numa = (char *) malloc (sizeof(char) * 100) ;
                }
            }
            else if (i == 3)
            {
                
            }
            else if (i == 4)
            {
                
            }
            else if (i == 5)
            {
                
            }
        }
    }
    /*nums = numbers (expression);
    operator = operators(expression);
    for (int i = 0 ; nums[i]!='\0' ; i++)
    printf("nums[%d]    =   %f\n",i,nums[i]);
    for (int i = 0 , j = 0 ; i < sizeof(nums)/sizeof(nums[0]) ; i++)
    {
        if (operator[j] == '#')
        {
            sprintf(numa,"%f",nums[i]);
            nums[j]=squareroot(numa);
            //numbers[i] = squareroot();
        }
    }*/
    /*while (expression[i] != '\0')
    {

        char oper;
        if(j == 0 && expression[i]>=48 && expression[i] <=57)
        {
            k = 0;
            while(expression[i]>=48 && expression[i] <=57)
            {
                //a = a * 10 + atoll(expression[i]);
                numa[j]=expression[i];
                j++;
                i++;
            }
        }
        if(k == 0 && expression[i]>=48 && expression[i] <=57)
        {
            j = 0;
            while(expression[i]>=48 && expression[i] <=57)
            {
                //a = a * 10 + atoll(expression[i]);
                numb[k]=expression[i];
                k++;
                i++;
            }
        }
        
        if(expression [i] == '+')
        {
            oper = '+';
        }

        else if(expression[i] == '-')
        {
            oper = '-';
        }

        else if (expression[i] == '*')
        {
            oper = '*';
        }

        else if (expression[i] == '/')
        {
            oper = '/';
        }

        else if (expression[i] == '#')
        {
            if (k == 0)
            {
                sprintf(numa , "%f" , ans = squareroot(numa));
            }
            else if (j == 0)
            {
                sprintf(numb , "%f" , ans = squareroot(numb));
            }
            printf("Answer :    %f\n" , ans);
        }

        else if (expression[i] == '^')
        {
            if (k == 0)
            {
                sprintf(numa , "%f" , ans = square(numa));
            }
            else if (j == 0)
            {
                sprintf(numb , "%f" , ans = square(numb));
            }
            printf("Answer :    %f\n" , ans);
        }

        if (oper == '+' && k != 0)
        {
            ans = ans + addition(numa , numb);
            numa = NULL;
            numa = (char * ) malloc (100 * sizeof(char));
            sprintf(numa , "%f" , ans);
        }
        else if (oper == '-' && k != 0)
        {
            ans = ans + subtraction(numa , numb);
            numa = NULL;
            numa = (char * ) malloc (100 * sizeof(char));
            sprintf(numa , "%f" , ans);
        }
        else if (oper == '*' && k != 0)
        {
            ans = ans + multiplication(numa , numb);
            numa = NULL;
            numa = (char * ) malloc (100 * sizeof(char));
            sprintf(numa , "%f" , ans);
        }
        else if (oper == '/' && k != 0)
        {
            ans = ans + division(numa , numb);
            numa = NULL;
            numa = (char * ) malloc (100 * sizeof(char));
            sprintf(numa , "%f" , ans);
        }
        i++;
    }*/
    free(numa);
    free(numb);
    return ans;
}

int main()
{
    float ans = 0;
    float mem = 0;
    bool halt = false;
    while (halt == false)
    {
        char * input = (char * ) malloc (1000 * sizeof(char));
        printf("Type \"HELP\" or enter a mathematical expression.\n");
        scanf("%s",input);
        if (strcmp("exit",input) == 0)
        halt = true;
        else
        {
            ans = 0;
            ans = calculate(input , ans);
            printf("Answer :    %f\n" , ans);
        }
        free (input);
    }
}
