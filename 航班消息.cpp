#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[8],b[8],i,j=0,h,m,t,min,h2,m2;
	a[0]=480;b[0]=616;a[1]=583;b[1]=712;a[2]=679;b[2]=811;
	a[3]=767;b[3]=900;a[4]=840;b[4]=968;a[5]=945;b[5]=1075;
	a[6]=1140;b[6]=1280;a[7]=1305;b[7]=1438;
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&h,&m);t=h*60+m;
	if((a[0]-t)>0) min=a[0]-t;
	else min=t-a[0];
	for(i=1;i<8;i++){
		if(abs(a[i]-t)<min){
			min=abs(a[i]-t);j=i;
		}
	}
	h=a[j]/60;m=a[j]%60;
	if(h>12)h=h-12;
	h2=b[j]/60;m2=b[j]%60;
	if(h2>12)h2=h2-12;
	if(j<=1)
	printf("Closest departure time is %d:%.2d a.m,arriving at %d:%.2d a.m",h,m,h2,m2);
	else	if(j==2)
	printf("Closest departure time is %d:%.2d a.m,arriving at %d:%.2d p.m",h,m,h2,m2);
    else  
	printf("Closest departure time is %d:%.2d p.m,arriving at %d:%.2d p.m",h,m,h2,m2);
     
	return 0; 	 
	
 } 
