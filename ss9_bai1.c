#include<stdio.h>
int main(){
	int arr[100];
	int n,currentLength;
	do { 
	printf("please enter the number of element in the array: ");
	scanf("%d",&n);
	
	} while (n>100 || n<0);
	for (int i=0;i<n;i++){
		printf ("Please enter %d element : ",i+1);
		scanf("%d",&arr[i]);
		}
	currentLength=n;
	int add,place;
	printf("please enter element to add: ");
	scanf("%d",&add);
	printf("Please enter the position to add element: ");
	scanf("%d",&place);
	if(place>100||place<0){
		printf(" Invalid the position\n ");
		return 1;
	}
	if(place>=currentLength){
		arr[place]=add;
		currentLength=place+1;
/*	} else {
		for(int i = currentLength; i > place; i--){
			arr[i]=arr[i-1];
		}
		arr[place]=add;
		//n++*/
	}
	printf("Array after adding of element:\n");
	for(int i=0;i<currentLength;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
