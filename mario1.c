#include<stdio.h> 
main()
{
int n,i,j;
printf("Height:");
scanf("%d",&n);
while(n<0 || n>23)
{
	printf("Height:");
	scanf("%d",&n);
}
for(i=1;i<=n;i++)
	{
	for(j=1;j<=n+1;j++)
		{
			if(j>=(n+1-i))
				printf("#");
			else
				printf(" "); 
        }
	printf("\n");
	}
}

