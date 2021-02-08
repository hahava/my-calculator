#include <stdio.h>

void printCalculator(char *input);

int main()
{
    char *input = "1234";
    printCalculator(input);
    return 0;
}

void printCalculator(char *input)
{
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
}
