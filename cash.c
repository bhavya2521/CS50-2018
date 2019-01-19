#include<stdio.h>
main()
{
int c=0,n;
float s;
printf("Change:");
scanf("%f",&s);
while(s<0)
{
	printf("Change:");
	scanf("%f",&s);
}
n=s*100;
c=c+n/25;
n=n%25;
c=c+n/10;
n=n%10;
c=c+n/5;
n=n%5;
c=c+n;
printf("%d",c);
}




