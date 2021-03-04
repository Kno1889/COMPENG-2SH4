#include <stdio.h>
int main(){
    int side1, side2, hyp, trip1, trip2, trip3, tripNum=0;
    // This program checks all the possible integer combinations that could become Pythagorean
    // triples. If all the sides are less than 400 (with 1 being longer than the other)
    // while satisfying a^2+b^2=c^2 then this triple is printed and counted as a
    //pythagorean triple (increment tripNum). Finally, all the triples found are prnted,
    // as well asthe numhber of triples found.
    for(side1 = 1; side1 <= 400; side1++){
        for(side2 = 1; side2 <= 400;side2++){
            for(hyp = 1; hyp <= 400; hyp++){
                if((side1)*(side1)+(side2)*(side2)==(hyp)*(hyp) && (side2 >= side1)){
                    trip1 = side1;
                    trip2 = side2;
                    trip3 = hyp;
                    printf("%d, %d, %d\n", trip1, trip2, trip3);
                    tripNum += 1;
                }
            }
        }
    }
    printf("The number of Pythagorean Triples under 400 is: %d", tripNum);
    return 0;
}
