#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 10
//给已有类型取名 
bool isExist(int myarr[],int len,int data );//给编译器用，变量部分均可删 
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
	printf("在变换后");
	
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
 	int i,j,temp;//最小下标值 
    {
     for(i=0;i<size;i++)
     for(j=0;j<size-1-i;j++)
     if(arr[j]>arr[j+1])
     {
     	temp=arr[j];arr[j]=arr[j+1];arr[j+1]=temp;
	 }
}
}
