#include <stdio.h>
int main(){
    int m, facSum, perfcount = 0, p, q;
    // This program will check for perfect numbers below a specific integer m to be input by the user. All factors of each number (except that specific number)
    // below m are summed, and if they are equal to the original number, then that number is a perfect number. Perfect numbers are printed, and a counter
    // of perfect numbers below m, perfcount is printed as well
    do{
        printf("Enter m: \n");
        scanf("%d", &m);
    }
    while(m<=1);

    for(p = 1; p <= m; ++p){
        facSum = 0;
        for(q = 1; q < p; q++){
            if(p%q == 0){
                facSum += q;
            }
        }
    if(facSum == p){
        perfcount ++;
        printf("%d is a perfect number\n", p);
    }
    }
    printf("There are %d perfect numbers less than or equal to %d", perfcount, m);
    return 0;
}
