#include <stdio.h>
int main(){
    //This program uses a series of if - else if statements to determine the output in response to the user entering their grade.
    // If the grade entered is within the range specified in the if statement, then the number directly below that specific segment
    // os printed
    float grade;
    printf("Please enter your grade:\n");
    scanf("%f", &grade);
    if(grade <= 59 && grade >= 0){
        printf("0");
    }
    else if(grade <= 69 && grade >= 60){
        printf("1");
    }
    else if(grade <= 79 && grade >= 70){
        printf("2");
    }
    else if(grade <= 89 && grade >= 80){
        printf("3");
    }
    else if(grade <= 100 && grade >= 90){
        printf("4");
    }
    else{
    printf("Invalid Input");
    }
    return 0;
}
