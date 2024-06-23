#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
char ch,mat[10], buffer[15], operators[] = "+-*/%=", specialchar[]= "#,.:;&(){}[]<>";
int isKeyword(char buffer[])
{
    char keywords[32][10] = {"auto","break","case","char","const","continue","default",
			    "do","double","else","enum","extern","float","for","goto",
			    "if","int","long","register","return","short","signed",
			    "sizeof","static","struct","switch","typedef","union",
			    "unsigned","void","volatile","while"};
    int i, flag = 0;
for(i = 0; i< 32; ++i)
{
	if(strcmp(keywords[i], buffer) == 0)
{
		   flag = 1;
		 break;
		}
	 }
    return flag;
}
int isop(char ch)
{
	int i;
	for(i=0;i<14;i++)
{
	if(ch==specialchar[i])
	return 1;
	}
	return -1;
}
int main()
{
    FILE *fp;
    int i,j=0,token=0,op=0,sc=0,kw=0,id=0;
fp = fopen("Riya.txt","r");
printf("\n Riya Shah \t 170410107108 ");

if(fp == NULL)
{
	printf("error while opening the file\n");
	exit(0);
    }
while((ch = fgetc(fp)) != EOF){
	if(op==sc&&sc==id && id==kw && kw==op){}
		else printf("\n");
	for(i = 0; i< 6; ++i){
	if(ch == operators[i]){
		++op;
		printf("%c -> %d#OPERATOR ", ch,op);
		++token;
			}
		   }
		for(i = 0; i< 13; ++i)
{
			if(ch == specialchar[i])
{
			++sc;
			printf("%c -> %d#SPECIAL_CHAR ", ch,sc);
			++token;
		}
}
	   if(isalnum(ch))
{
	       buffer[j++] = ch;
	   }
	   else if((ch == ' ' || ch == '\n' || isop(ch)==1 && (j != 0)))
{
	   buffer[j] = '\0';
		   j = 0;
		   if(isKeyword(buffer) == 1)
{
		       ++kw;
		printf("%s -> %d#KEYWORD ", buffer,kw);
		   ++token;
		}
		   else
{
			for(i=0;buffer[i]!='\0';i++)
			mat[id]=buffer[i];
			++id;
		printf("%s -> %d#IDENTIFIER ", buffer,id);
				   ++token;
		   }
}
    }
printf("\n ========= SYMBOL TABLE ========= \n");
	printf(" Index   Identifier  \n");
	for(j=0;j<id;j++){
	printf("   %d        %c\n", (j+1),mat[j]);
	}
printf("\n %d Tokens are Present",token);
fclose(fp);
return 0;
}
