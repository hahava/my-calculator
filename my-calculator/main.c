#include <stdio.h>
#include <string.h>

#define INPUT_SIZE 17

/*Boolean*/
#define TRUE 1
#define FALSE 0

/*For Rule Calculation*/
#define PLUS '+'
#define MINUS '-'
#define MULTIPLICATION '*'
#define DIVISION '/'

typedef int boolean;

void printCalculator(char input[]);
void printCarrigeReturn(int count);
void removeCarrigeReturn(char *input);

boolean checkValidation(char input[]);
boolean isForRuleCalculation(char word);
boolean isNumber(char word);

int main()
{
    char input[INPUT_SIZE];

    while (TRUE)
    {
        printf("quit 입력시 종료 :\t");
        fgets(input, INPUT_SIZE, stdin);

        fflush(stdin);

        removeCarrigeReturn(input);

        if (strcmp(input, "quit") == 0)
        {
            break;
        }
        else if (checkValidation(input) == FALSE || strlen(input) == 0)
        {
            printf("입력값이 올바르지 않습니다.\n");
            continue;
        }
        else
        {
            printCalculator(input);
            printf("연산중..\n");
        }
    }
    return 0;
}

void printCalculator(char input[])
{
    printCarrigeReturn(2);

    printf(" _____________________\n");
    printf("|  _________________  |\n");
    printf("| |%17s| |\n", input);
    printf("| |_________________| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n");

    printCarrigeReturn(2);
}

void printCarrigeReturn(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("\n");
    }
}

void removeCarrigeReturn(char input[])
{
    int inputLength = strlen(input);

    if (inputLength < INPUT_SIZE)
    {
        input[inputLength - 1] = '\0';
    }
}

boolean checkValidation(char input[])
{
    printf("%s\n", input);

    for (int i = 0; i < strlen(input); i++)
    {
        char word = input[i];

        if ((isForRuleCalculation(word) || isNumber(word)) == FALSE)
        {
            return FALSE;
        }
    }

    return TRUE;
}

boolean isForRuleCalculation(char word)
{
    return word == PLUS || word == MINUS || word == MULTIPLICATION || word == DIVISION;
}

boolean isNumber(char word)
{
    return word >= '0' && word <= '9';
}