#include <stdio.h>

int main() 
{
    int num, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        sum += i;
        i++;
    }

    printf("The sum of numbers from 1 to %d is %d\n", num, sum);

    return 0;
    
}

