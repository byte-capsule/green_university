#include <stdio.h>
int main() {
    int arr1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
   
    int arr_res[2][3];

    // Addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arr_res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
   

    return 0;
}
