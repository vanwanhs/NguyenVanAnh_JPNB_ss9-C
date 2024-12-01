#include<stdio.h>
int main (){
	int nums;
	printf("please you enter numbers of array: ");
	scanf ("%d",&nums);
	int arr[nums];
	for (int i=0;i<nums;i++){
		printf("please you enter element %d of array:",i+1);
		scanf("%d",&arr[i]);
	}
	int newNums,index;
	do{
		printf("please you enter place to change:");
		scanf("%d",&index);
	} while(index>nums||index<0);
	printf("please you enter new numbers: ");
	scanf("%d",&newNums);
	arr[index]=newNums;
	printf("array after to change:\n");
	for(int i=0;i<nums;i++){
		printf("%d ",arr[i]);
	
	}
	return 0;
}
