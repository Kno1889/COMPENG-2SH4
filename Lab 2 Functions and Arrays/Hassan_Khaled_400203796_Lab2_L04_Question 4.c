#include <stdio.h>
void letter_freq(const char word[], int freq[]);

int main(){
    int freq[26]= {0};
    char x[] = {"The Mitochondria is the PowerHouse of the Cell"};
    letter_freq(x, freq);
    return 0;
}

void letter_freq(const char word[], int freq[]){
    int l = 97;
    int U;
    int lCount;
    for(U = 65; U <= 90; U++){
        lCount = 0;
        while (word[lCount] != '\0'){
            if(word[lCount] == U || word[lCount] == l){ // These lines check all the characters in an array (until \0, the default ending character) and compares 
                freq[U-65]++;                           // them with the current value of the variables l and U, or the variables holding the current ASCII values
            }                                           // (both uppercase and lowercase) of the current letter. l and U start at 97 and 65 respectively, and keep 
        lCount++;                                       // incrementing throughout the loop execution until they reach the upper limits of their value ranges. 
        }
        l++; // l, the variable for lowercase letters, is incremented here to keep pace with U, the uppercase letter variable. 
    }
    int i;
    for(i = 0; i < 26; i++){ // This loop prints 
        printf("The count of '%c' and '%c' is: %d\n", i+ 65, i+97, freq[i]);
    }

}

