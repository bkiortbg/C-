#include <stdio.h>
int main()
{
	float a[9];
	int max=0,min=0,i; 
	float sum=0,ave;
	for(i=0;i<9;i++)
		scanf("%f",&a[i]);
	for(i=1;i<9;i++){
		if(a[i]>a[max])
			max=i;
	}
	for(i=1;i<9;i++){
		if(a[i]<a[min])
			min=i;
	}
	for(i=0;i<9;i++){
		if(i!=max&&i!=min)
			sum+=a[i];
	}
	ave=sum/7;
	printf("ȥ����߷֣�%.2f,ȥ����ͷ֣�%.2f,ƽ����Ϊ:%.2f\n",a[max],a[min],ave);
	return 0;
}
