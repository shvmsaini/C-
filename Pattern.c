#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a=71,l,j,b=1,c=71,k;
	for(l=1;l<=7;l++)
	{
		for(i=65;i<=a;i++)
			printf("%c", i);
		
		if(l>1)//space loop
		{
					
			for(j=1;j<=b;j++)
				printf(" ");
				b=b+2;
		}
		
		for(k=c;k>=65;k--)
		{
			if(k==71)
				continue;
			printf("%c", k);
		}
		
		printf("\n");
		a--;
		
		c--;
	}
	getch();
	return 0;
}
