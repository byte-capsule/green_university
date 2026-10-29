#include <stdio.h>

int main() {
    int x_row = 3, x_column = 3;
    int x[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int y_row = 3, y_column = 2;
    int y[3][2] = {
        {1, 2},
        {4, 5},
        {7, 8}
    };
    

    if (x_column != y_row) {
        printf("Error! Column of the first matrix must equal the row of the second matrix.\n");
        return 0;
    }
    
    int result[3][2] = {0};
    
    for (int i = 0; i < x_row; i++) {
        for (int j = 0; j < y_column; j++) {
            for (int k = 0; k < x_column; k++) {
                result[i][j] += x[i][k] * y[k][j];
            }
        }
    }

    return 0;
}
