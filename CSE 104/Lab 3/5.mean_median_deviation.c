//Write a C Program to Calculate mean, median and Standard Deviation.

#include <stdio.h>
int main(){
	int arr[7]={1,4,9,7,5,9,8};
	int arr_size=7;
	//Calculate Mean
	float mean=0;
	for(int i=0;i<arr_size;i++){
		mean+=arr[i];
	}
	mean/=arr_size;
	printf("Mean : %f",mean);
	//Calculate Median
	float median;
	for(int i=0;i<arr_size;i++){
		for(int j=i+1;j<arr_size;j++){
			if (arr[i]>arr[j]){
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}
		}
	}
	if(arr_size%2!=0){
		median=arr[arr_size/2];
	}else{
		median=(arr[(arr_size-1)/2]+arr[arr_size /2 ])/2;
	}
	printf("Median : %f",median);
	

	//
	
	
}
