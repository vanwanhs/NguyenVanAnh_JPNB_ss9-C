#include<stdio.h>
int main (){
	int arr[100];
	int length,element,rowDel;
	printf("please you enter the length of array: ");
	scanf("%d",&length);
	for (int i=0;i<length;i++){
		printf("please you enter element %d of array: ",i+1);
		scanf("%d",&element);
	}
	//  xoa phan tu cua hang rowDel
	do{
	printf("please you enter row to delete:");
	scanf("%d",&rowDel);
    } while (rowDel>length||rowDel<0);
    for (int i=rowDel;i<length-1;i++){
    	arr[i]=arr[i+1];
	}
	length--;
	printf("array after to delete: ");
	for(int i=0;i<length;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
