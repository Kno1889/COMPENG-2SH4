#include <stdio.h>
int main(){
    int n = 0;
    int counter = 0;
    float pi = 0.0;
    float denom = 1.0;
    int sign = 1;

    // This program estimates the value of pi by summing the first n values in the
    // infinite series defined in the question. The user determines n.
    while (n<1){
        printf("enter a value for n: \n");
        scanf("%d", &n);
    }

    while (counter < n)
    {
    pi = pi + ((4/denom)*sign);
    counter ++;
    denom +=2;
    sign *=-1;// the variable sign is used to alternate the plus/minus signs in the infinite series. It is the same as using (-1)^n+1
    }
    printf("your pi approximation is: %f\n", pi);

    return 0;
}
