#include <stdio.h>

int main(){
    const int SIZE = 5;
    int scores[SIZE] = {0, 60, 70, 100, 90};
    printf("scores = ");
    for (int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
    }
    
}