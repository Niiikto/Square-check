#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_SIZE 100000

void fill_squares(int squares[], int size) {
    for (int i = 0; i < size; i++) {
        squares[i] = i * i;
    }
}

bool in_squares(int num, int size, int squares[]) {
    for (int i = 0; i < size; i++) {
        if (squares[i] == num) {
            return true;
        }
    }
    return false;
}

int main(){
    int sqr[MAX_SIZE];
    

    fill_squares(sqr, MAX_SIZE);
    

    int input;
    printf("Please enter number to check: ");
    scanf("%d", &input);
    
    

    if(in_squares(input, MAX_SIZE, sqr)){
        printf("%d = %.0f^2", input, sqrt(input));
    }
    else{
        printf("Not a square");
    }

    printf("\n");


    
    return 0;
}