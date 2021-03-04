# include <stdio.h>
# define N 4
void diagPrint(int sqmat[][N]);

int main(){
    int x[][N] = {{1, 12, 13, 49}, {5, 16, 17, 81}, {9, 10, 11, 20}, {2, 45, 19, 14}};
    diagPrint(x);
    return 0;
}

void diagPrint(int sqmat[][N]){ // This function prints elements of a matrix in diagonal scan order.
  int r,c,c1 = 0;
  int c2 = 1;

  for(c1 ; c1 < N; c1++){ // This for loop prints the first part of the matrix in the desired order, until (and including) the longest diagonal.
    r = c1;
    c = 0;
    while(r >= 0){
      printf("%d ",sqmat[r][c]);
      r--; // row counter is decremented while column counter is incremented to allow the function to print the elements in diagonal scan order.
      c++;
    }
  }
  for(c2 ; c2<N ; c2++){ // A second for loop is necessary to print the second part matrix, after the longest diagonal.
    r = N-1;            // In this case, the row variable starts at the last row (N-1, since indexing starts at 0), not at zero like the first for loop.
    c = c2;
    while(c < N){
      printf("%d ",sqmat[r][c]);
      r--;
      c++;
    }
  }
}

