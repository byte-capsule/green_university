#include <stdio.h>

int main() {
    // User input
    int arr[2][3];
    printf("Enter 6 numbers for the 2x3 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Print
    printf("\nThe array is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]); // Added a space for separation
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
