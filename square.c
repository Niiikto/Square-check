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

void fill_pow3(int pow3[], int size) {
    for (int i = 0; i < size; i++) {
        pow3[i] = i * i * i;
    }
}

bool in_pow3(int num2, int size, int pow3[]) {
    for (int i = 0; i < size; i++) {
        if (pow3[i] == num2) {
            return true;
        }
    }
    return false;
}

int main(){
    int sqr[MAX_SIZE];
    int cb[MAX_SIZE];
    

    fill_squares(sqr, MAX_SIZE);
    fill_pow3(cb, MAX_SIZE);
    

    int input_sq;
    int input_cb;
    printf("Please enter number to check if it is a square: ");
    scanf("%d", &input_sq);
    printf("Please enter number to check if it is a cube: ");
    scanf("%d", &input_cb);
    
    

    if(in_squares(input_sq, MAX_SIZE, sqr)){
        printf("%d = %.0f^2", input_sq, sqrt(input_sq));
    }
    else{
        printf("Not a square");
    }

    printf("\n");
    
    if(in_pow3(input_cb, MAX_SIZE, cb)){
        printf("%d = %.0f^3", input_cb, cbrt(input_cb));
    }
    else{
        printf("Not a cube");
    }

    printf("\n");


    
    return 0;
}
