#include<stdio.h>
#include<string.h>
main()
{
char a[10000];
int i,n,x=1,k=0,d;
printf("Number:");
scanf("%s",&a);
n=strlen(a);
if(n==15 || n==13 || n==16)
{
	do
	{
	x=0;
	for(i=0;i<n;i++)
		{
		if(isdigit(a[i]))
			continue;
		else
			{
				x=1;
				break;
			}	
		}
		if(x==1)
		{
			printf("Number:");
			scanf("%s",&a);
		}
	}while(x==1);
	for(i=n-2;i>=0;i=i-2)
	{
		d=(a[i]-48)*2;
		while(d>0)
		{
			k=k+d%10;
			d=d/10;
		}
		
	}
	for(i=n-1;i>=0;i=i-2)
		k=k+(a[i]-48);
	if(k%10==0)
	{
		d=(a[0]-48)*10+a[1]-48;
		if((d==34 || d==37) && n==15 )
		printf("AMEX");
		else if((d>=51 && d<=55) && n==16)
		printf("MASTER CARD");
		else if((a[0]==4) && (n==13 || n==16))
		printf("VISA");
		else
		printf("INVALID");
	}
	else
		printf("INVALID");
}
else
printf("INVALID");
printf("\n");
}
