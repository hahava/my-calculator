#include <stdio.h>
#include <string.h>

#define INPUT_SIZE 17

void printCalculator(char input[]);
void printCarrigeReturn(int count);
void removeCarrigeReturn(char *input);

int main()
{
    char input[INPUT_SIZE];
    fgets(input, INPUT_SIZE, stdin);
    removeCarrigeReturn(input);
    printCalculator(input);
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