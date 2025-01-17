#include <stdio.h>
#include<math.h>
int main()
{
    int n, x, number, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    number = n;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
    }
    printf("No. of digits in n is: %d\n", count);
    n = number;
    for(int i = 0; i < count; i++){
        x = (n / (int)pow(10,i)) % 10;
        printf("Digits in the number are: %d\n", x);
    }

    return 0;
}