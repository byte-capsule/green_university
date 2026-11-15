// Write a program to sort the elements of an array using the selection sort algorithms. 
#include <stdio.h>
int main(){
    int arr[6]={3,4,5,2,5,6};
    int arr_size=6;
    //selection sort
    for(int i=0;i<arr_size;i++){
        int min_index=i;
      for(int j=i;j<arr_size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
      }
      if(min_index !=i){
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
      }
    }
    for(int i=0;i<arr_size;i++){
        printf("%d ",arr[i]);
    }
}
