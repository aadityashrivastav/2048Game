#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int Matrix[SIZE][SIZE] = {0};
int score = 0;

void Display() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d ", Matrix[i][j]);
        }
        printf("\n"); 
    }
    printf("Score: %d\n", score);
    printf("\n");
}

void Random_creater() {
    int temp1, temp2, add, i, j;

    temp1 = rand() % SIZE;
    temp2 = rand() % SIZE;

    if ((temp1 + temp2) % 2 == 0)
        add = 2;
    else
        add = 4;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (Matrix[i][j] == 0) {
                Matrix[i][j] = add;
                return;
            }
        }
    }
}

int main() {
    Random_creater();
    Display();

    return 0;
}
