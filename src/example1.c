#include <stdio.h>

int main(){
    const int SIZE = 5;
    int scores[SIZE] = {0, 60, 70, 100, 90};
    printf("scores = ");
    for (int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
    
    for (int i=0; i<SIZE; i++){ //バブルソート
        for (int j=0; j<SIZE; j++){
            if (scores[i] > scores[j]){
                int temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    printf("result = ");
    for (int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
    }
}