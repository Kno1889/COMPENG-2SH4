#include <stdio.h>
int main(){
    // This program checks if the input value is a 5-digit number by checking if it lies between 10,000 and 99,999 (inclusive)
    // or between -99,999 and -10,000.  
    
    
    int x = 1;// x starts at 1 to initiate the while loop, then changes depending on user input.
    while(x != 0){
        printf("Please input an integer (0 to end): \n");
        scanf("%d", &x);
        
        if(x>=10000 && x<=99999 || x<=-10000 && x>=-99999){
            printf("Your input is a five-digit number: %d \n", x);
        }
    }
    printf("Thank you for using my software. Bye!");
    return 0;
}
