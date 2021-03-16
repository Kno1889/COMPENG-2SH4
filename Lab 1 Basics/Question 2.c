#include <stdio.h>
int main()
{
    int n, smallest, count, input, first;

    do{
    printf("How many integers do you wish to input?\n");
    scanf("%d", &n);
    }
    while(n<=0);
    // the first value input is stored as the smallest by default until another value entered through the for loop is smaller than it.
    // At the end of the program, the value of the variable smallest is printed on the screen. 
    printf("Enter the first integer:\n");
    scanf("%d", &first);
    smallest=first;

    for(count = 0; count < (n-1); count++){
        printf("Enter the next integer:\n");
        scanf("%d", &input);

        if(input<smallest){
            smallest = input;
        }
    }
    printf("Your smallest integer is %d", smallest);
}
