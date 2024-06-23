#include<stdio.h>
#include<stdlib.h>

char str[20]; int i=0;
void E();
void Ee();
void T();
void Tt();
void F();

void E()
{
printf("E->TE'\n"); T();
Ee();
}

void Ee()
{
int null=1; if(str[i]=='+'){
printf("E'->+TE'\n"); i++;
T();
Ee();
}
if(null==1)
{
printf("E'->null\n");
}
}

void T()
{
printf("T->FT'\n");

F();
Tt();
}

void Tt()
{
int null=1; if(str[i]=='*'){
printf("T'->*FT'\n"); i++;
F();
Tt();
}
if(null==1)
{
printf("T'->null\n");
}
}

void F()
{
if(str[i]>='a' && str[i]<='z')
{
printf("F->id\n"); i++;
}
if(str[i]=='(')
{
printf("F->(E)\n"); i++;
E();
if(str[i]==')')
{
i++;
}
}
}

int main()
{
    printf("\n Riya shah \t 170410107108 ");
printf("\n Recursive Descent Parsing for the Grammar\n"); printf("E -> T + E / T\n");
printf("T -> F * T / F\n");

printf("F -> ( E ) / i\n"); printf("\n\nEnter the string "); scanf("%s",str);
printf("\nThe Recursive Descent Parsing of this string is\n"); E();
return 0;
}
