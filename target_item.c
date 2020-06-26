#include<stdio.h>

//Write a function that searches for target item in first n elements of array arr and returns index of target or NOT_FOUND as -1. 
//Pre: target and first n elements of array arr are defined and n>=0. 

int main(){
	
	int size,i,a;
	printf("Enter size of array:");
	scanf("%d",&size);
	
	int arr[size];
	
	time_t t;
	
	srand((unsigned) time(&t));
	
	for(i=0;i<size;i++){
		printf("%d ",arr[i]=rand() %50);
	}
	
	//I created a random array from numbers up to 50. (I got the size of the array from the user.)
	
	
	printf("\nEnter an integer:");
	scanf("%d",&a);
	
	int k=searches_for_target(arr,size,a);
	
	if(k==-1){
		printf("NOT FOUND");
	}
	
	

	
	return 0;
}

int searches_for_target(int array[],int size1,int b){
	
	int j,count=0;
	
	for(j=0;j<size1;j++){
		
		if(b==array[j]){
		   count++;
		   break;
		}
	
	}
	
	if(count!=0){
		printf("%d ",b);
	}
	else{
		return -1;
	}

	//If the element entered by the user is not in the array, the function returned -1.
	
}
