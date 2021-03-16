#include <stdio.h>
#include <math.h>
double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double b[5] = {6.6, 7.7, 8.8, 9.9, 10.11};
double c[];
void print_vector(double array[], int size); // Function Prototypes
void add_vectors(double vector1[], double vector2[], double vector3[], int n);
double scalar_prod(double vector1[], double vector2[], int n);
double norm2(double vector[], int size);

int main(){ // Main function, contains function calls to test/implement written functions
    print_vector(a, 5);
    add_vectors(a, b, c, 5);
    print_vector(c, 5);
    scalar_prod(a, a, 5);
    norm2(a, 5);
    return 0;
}
//Function Definitions
void print_vector(double array[], int size){ // This function prints the elements inside an array in a single line, separated by commas.
    int i;
    for(i = 0; i < size; i++){
    printf("%g, ", array[i]);
    }
}

void add_vectors(double vector1[], double vector2[], double vector3[], int n){// This function uses a for loop to add the elements that
    int i;                                                                    // have the same index in two distinct functions and saves the sum
    for(i = 0; i < n; i++){                                                   // in the same index in a third function included in the function call
        vector3[i] = vector1[i] + vector2[i];
    }
}

double scalar_prod(double vector1[], double vector2[], int n){ // This function calculates the scalar product of two arrays by adding the products
    int i;                                                     // of each two values stored in the different arrays that have the same index
    double sum = 0;
    for(i = 0; i < n; i++){
        sum = sum + vector1[i] * vector2[i];
    }
    //printf("%g", sum);
    return sum;
}

double norm2(double vector[], int size){ // This function calls on the scalar_prod function to find the L2 norm of the vector, which is found by
    double norm;                         // finding the square root of the scalar product of a vector with itself.
    double sum;
    sum = scalar_prod(vector, vector, size);
    norm = sqrt(sum);
    printf("%g", norm);
    return norm;
}
