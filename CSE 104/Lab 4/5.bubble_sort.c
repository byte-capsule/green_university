#include <stdio.h>

int main() {
    int arr[6] = {1,5,4,3,2,1};
    int arr_size=6;
    for(int i=0;i<arr_size-1;i++){
        for(int j=0;j<arr_size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);

    }
    return 0;
}
