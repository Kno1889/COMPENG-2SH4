#include <stdio.h>
void efficient(const int source[], int val[], int pos[], int size);
void reconstruct(int source[], int m, const int val[], const int pos[], int n);

int main(){
int size = 7;
int eSize = 3;
int source[] = {0,0,0,2,0,6,10};
int val[eSize];
int pos[eSize];

efficient(source, val, pos, size);
printf("values array = \n");
for(int i = 0; i < eSize; i++){
  printf(" %d ",val[i]);
}

printf("\n"); // Printing a newline for aesthetics

printf("index array = \n");
for(int i=0;i<eSize;i++){
  printf(" %d ",pos[i]);
}

printf("\n");

reconstruct(source, size, val, pos, eSize);
printf("source array = \n");
for(int i=0;i<size;i++){
  printf(" %d ",source[i]);
}
return 0;
}

void efficient(const int source[], int val[], int pos[], int size){
    int i;
    int j = 0;
    while(i < size){            // This loop iterates through the source array as long as i (the counter that gets incremented) is lower than the size.
        if(source[i] != 0){     // The if statement finds the next non-zero element in source and stores it in the j'th index of val. It also stores
            pos[j] = i;         // its index, i, in the j'th index of pos as well.
            val[j] = source[i];
            j++;
        }
    i++;
    }
}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){
    int i;
    for(i = 0; i < m; i++){ // This for loop creates an array of zeros called source, of size dimension m determined by us while calling the function.
        source[i] = 0;
    }
    int j;
    for(j = 0; j < n; j++){    // This for loop is executed n times, where n is the size of the arrays pos and val. It adds that values from the array val
              source[pos[j]] = val[j];      //into their respective positions (found in the array pos), in the source array
    }


}
