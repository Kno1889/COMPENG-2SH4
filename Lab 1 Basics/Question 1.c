#include <stdio.h>
// The program whether each number between 30 and 1000 is divisible by 4 using the % operator.
// If the remainder is 0, the number is added to the sum.  The sum is printed after every loop.
int main()
{
    int i;
    int sumA = 0;

    for (i = 30; i <= 1000; i++)
    {
        if (i%4 == 0){
            sumA +=i;
        }
        }

    printf("The sum of all multiples of 4 between 30 and 1000 calculated using a For Loop is %d\n", sumA);

    int j = 30;
    int sumB = 0;
    while (j<=1000){
        if (j%4 == 0){
            sumB +=j;
        }
        j++;
    }
    printf("The sum of all multiples of 4 between 30 and 1000 calculated using a While Loop is %d\n", sumB);

    int k = 30;
    int sumC = 0;
    do {
        if (k%4 == 0){
            sumC +=k;
        }
        k++;
    }
    while (k <= 1000);
    printf("The sum of all multiples of 4 between 30 and 1000 calculated using a Do-While Loop is %d", sumC);

}
