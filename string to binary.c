#include<stdio.h>
#include<string.h>
void bin(int);
void main()
{
	char a[200];
	char s[200];
	char sd[400];
	int len=0,i,j,l;
	long int n=0,t=0;
	printf("\nEnter the text\n");
	gets(a);
	len=strlen(a);
	printf("binary for '   %s   ' is\n\n",a);
	for(i=0;i<len;i++)
	{
		
		bin(a[i]);
	}
printf("\n\n");
}
void bin(int n)
{
	int v=0;
	long int t=1,l=0,k=0;
	while(v<8)
	{
		
		l=n%2;
		k=k+(l*t);
		t=t*10;
		v=v+1;
		n=n/2;	
	}
	printf(" %08li",k);
}