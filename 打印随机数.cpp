#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 10
//����������ȡ�� 
bool isExist(int myarr[],int len,int data );//���������ã��������־���ɾ 
void printArr(int myarr[],int N );
void (int myarr[],int size);
int main()
{
	srand(time(NULL));
	T myarr[N];T data;
	printf("Generate some numbers:");
	for(int i=0;i<N;i++){
	do{
		data=rand()%50+1;
		}while(isExist(myarr,i,data));
		myarr[i]=data;
	}

	printArr(myarr,N);
	printf("�ڱ任��");
	
	printArr(myarr,N);
	return 0;
 } 
 bool isExist(int myarr[],int leng,int data){
 	for(int i=0;i<leng;i++){
 		if(data==myarr[i])
 		return true;
 		
 		return false;
	 }
 	
 }
 void printArr(int myarr[],int size ){
 	for(int i=0;i<size;i++){
 		printf(" %d",myarr[i]);
 	
	 }
 	
 	
 }
 void BubbleSort(T arr[],int size)
 {
 	int i,j,temp;//��С�±�ֵ 
    {
     for(i=0;i<size;i++)
     for(j=0;j<size-1-i;j++)
     if(arr[j]>arr[j+1])
     {
     	temp=arr[j];arr[j]=arr[j+1];arr[j+1]=temp;
	 }
}
}
