#include<stdio.h>
int size;
void deleValue(int *array,int *index){
	for(int i=*index;i<size;i++){
		*(array+i)=*(array+i+1);
	}
	size--;
	printf("mang sau khi xoa la:\n");
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
}
int main(){
	int array[]={1,2,3,4,5,6,7,8,9};
	int index;
	size=sizeof(array)/sizeof(int);
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	printf("\nmoi ban nhap vi tri can xoa: ");
	scanf("%d",&index);
	deleValue(array,&index);
}
