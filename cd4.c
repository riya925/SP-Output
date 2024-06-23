#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char op[]={'=','/','%','*',';',':','&','(',')','{','}','+','-'};
char str[50],op1[50]="";
int i=0,j=0,k=0;
//clrscr();
printf("Enter String:");
gets(str);

for(i=0;i<strlen(str);i++)
{
	for(j=0;j<strlen(op);j++)
	{
		if(str[i]==op[j])
		{
			op1[k]=op[j];
			k++;
			break;
		}
	}
}
printf("\n\nOperators Identified: ");
for(i=0;i<strlen(op1);i++)
	printf("%c  ",op1[i]);

getch();
}
