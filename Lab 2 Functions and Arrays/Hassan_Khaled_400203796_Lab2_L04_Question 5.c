#include <stdio.h>
void string_copy(const char source[], char destination[], int n);

int main(){
    int n = 6;
    char dest[n];
    const char str[] = {"OH DEAR GOD WHY IS THIS TAKING SO LONG"};
    string_copy(str, dest, n);
    return 0;
}

void string_copy(const char source[], char destination[], int n){ // This function takes the created destination array with known size n, and copies the first n
    int i = 0;                                                    // character elements from the source array to the destination array. Then a null character
    for (i; i < n-1; i++){                                        // is assigned to the last value in the destination array. Therefore, (n-1) values are copied 
        destination[i] = source[i];                               // from the source to the destination. 
    }
    destination[n-1] = '\0';
    printf("%s", destination);
}
