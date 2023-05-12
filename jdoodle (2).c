#include <stdio.h>

int main() {
    int a[ROWS][COLS] = {{1, 2}, {3, 4}};
    int b[ROWS][COLS] = {{5, 6}, {7, 8}};
    int result[ROWS][COLS];
    
    // Add matrices
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Display result matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
