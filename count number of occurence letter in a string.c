/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int count[26]={0};
	int countt[26]={0};
	printf("\nEnter the string:");
	gets(a);
	int l=strlen(a);
	printf("\n%d\n",l);
	int Z,k=0,j;
	while(k<l)
	{
		if((a[k]>64)&&(a[k]<91))
		{
			j=(a[k]-65);	
			count[j]=count[j]+1;
		}
		else if((a[k]>96)&&(a[k]<123))
                {
                        Z=(a[k]-97); 
                        countt[Z]=countt[Z]+1;
                }
		k=k+1;
	}
	
	for(j=0,Z=0;j<26;Z<26,j++,Z++)
	{
	   
			printf("\n%c occured %d times\n",j+65,count[j]);
		 
		    printf("\n%c occured %d times\n",Z+97,countt[Z]);
	}
}