#include <stdio.h>
int main(){
    //Part A
    // This part works only on 7 digit numbers. It takes the last digit in the input(from right to left) and multiplies it by the variable mult
    // , then adds that to the variable rev to become the reversed number. mult is divided by 10 at every iteration such that the digits added to rev
    // are in the opposite order to that of the number input.
    int dig, rem, num, mult=1000000,rev=0;
    printf("Please enter a 7 digit number: \n");
    scanf("%d", &num);
    for(dig=0; dig<7; dig++){
        rem = num%10;
        rev += rem*mult;
        num /= 10;
        mult /=10;
        }
    printf("Your reversed number is: %d\n", rev);

    //Part B
    // This program works on any positive integer. It stores the last digit of numA in remA, multiplies that by 10 and adds it to revA,
    // the reversed number variable. That is repeated until the number becomes zero (due to integer division) after many divisions by 10.
    int numA, revA=0, remA;

    printf("Enter a positive integer: \n");
    scanf("%d", &numA);
    while(numA>0){
    remA = numA%10;
    revA = revA*10 + remA;
    numA /= 10;
    }
    printf("Your reversed number is: %d", revA);
    return 0;
}
