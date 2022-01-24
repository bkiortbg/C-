#include <stdio.h>
struct data{
	int year;int month;int day;
};
int main()
{
	struct data today,tomorrow;
	int a1[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a2[]={31,29,31,30,31,30,31,31,30,31,30,31};
	char month[13][12]={"January","February","March","April","May","June","July","August","September","October","November","December",""};
	printf("enter year,month,day");
	scanf("%d,%d,%d",&today.year,&today.month,&today.day);
	tomorrow.month=today.month;tomorrow.year=today.year;tomorrow.day=today.day+1;
	if((today.year%4==0&&today.year%100!=0)||today.year%400==0)
	{
		if(tomorrow.day>a2[today.month-1]){
		tomorrow.day=1;tomorrow.month=today.month+1;
		if(tomorrow.month>12){
			tomorrow.month=1;tomorrow.year=today.year+1;
		}
	}
	}
		else{
		if(tomorrow.day>a1[today.month-1]){
		tomorrow.day=1;tomorrow.month=today.month+1;
		if(tomorrow.month>12){
			tomorrow.month=1;tomorrow.year=today.year+1;
		}
	}
}
	printf("%s ",month[tomorrow.month-1]);
	if(tomorrow.day==1||tomorrow.day==21||tomorrow.day==31)
		printf("%dst",tomorrow.day);
		if(tomorrow.day==2||tomorrow.day==22)
		printf("%dnd",tomorrow.day);
		if(tomorrow.day==3||tomorrow.day==23)
			printf("%drd",tomorrow.day);
		if(tomorrow.day!=1&&tomorrow.day!=21&&tomorrow.day!=31&&tomorrow.day!=2&&tomorrow.day!=22&&tomorrow.day!=3&&tomorrow.day!=23)
		printf("%dth",tomorrow.day);
		printf(",%d",tomorrow.year);return 0;
}

