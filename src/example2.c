#include <stdio.h>

void sortDescending(int array[], int size);
void sortDescending(int array[], int size){
    for (int i=0; i<size; i++){ //バブルソート
        for (int j=i+1; j<size; j++){
            if (array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}


int main(){
    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    printf("scores = ");
    for (int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
    
    sortDescending(scores, SIZE);

    printf("result = ");
    for (int i=0; i<SIZE; i++){
        printf("%d ", scores[i]);
    }

    return 0;
}