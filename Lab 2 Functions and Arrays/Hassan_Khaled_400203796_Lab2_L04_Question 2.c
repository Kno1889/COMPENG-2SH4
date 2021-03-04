#include <stdio.h>
#include <math.h>
#define N 3
int is_diag_dom(int mat[][N]);

int main(){
    int x[][N] = {-4, 2, 1, 1, 6, 2, 1, -2, 5};
    is_diag_dom(x);
    return 0;
}

int is_diag_dom(int mat[][N]){ // This function checks for the number of "goodrows" that exist in a square matrix. A "goodrow" is taken to mean
    int i;                     // a row where each diagonal element in each row is strictly greater than absolute value of the sum of the
    int goodrow = 0;           // rest of the elements in that row
    for(i = 0; i < N; i ++){   // Nested for loops are used to go through every element in every row AND every column.
        int j;
        int sum = 0;
        for(j = 0; j < N; j++){
            if(i != j){         // This line adds the absolute value of the element to the sum variable as long as the element is not a diagonal one.
                sum += fabs(mat[i][j]);
            }
        }
        if(fabs(mat[i][i]) > sum){ // If the condition of diagonal domination is fulfilled, the number of good rows is incremented.
            goodrow++;
        }
    }
    if(goodrow == N){ // If every row is good (diagonally dominant), then 1 is returned. Otherwise, zero is.
        printf("1");
    }
    else{
        printf("0");
    }
}
