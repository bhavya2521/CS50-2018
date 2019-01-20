#include<stdio.h>
#include<string.h>
#define LC (a[i]>=97 && a[i]<=122) //Condition for lowercase letters
#define UC (a[i]>=65 && a[i]<=90)//Condition for uppercase letters
main()
{
long l,i,key;
int k;
char a[1000000];
printf("Enter the key\n");
scanf("%ld",&key);
if(key<0)
printf("Given k is not valid");
else
{
	key=key%26;
	k=key;
	printf("Plaintext =");
	scanf(" %[^\n]s",a); //To read a sentence with spaces
	l=strlen(a);
	printf("Ciphertext=");
	for(i=0;i<l;i++)
	{
		if(LC||UC)
			{
				if(LC && a[i]+k>122)
					printf("%c",(a[i]+k-26));
				else if(UC && a[i]+k>90)
					printf("%c",(a[i]+k-26));
				else 
					printf("%c",a[i]+k);
			}
		else
			printf("%c",a[i]);
	}
}
printf("\n");
}
