#include<stdio.h>
#include<string.h>

struct intermediate
{
int address;
char label[10],mnem[10],op[10];
}res;

struct symbol
{
char symbol[10]; int address;
}sy;

struct literal
{
char value[20];
}lit;

int main()
{
int i=0;
FILE *s1,*p1,*p2,*p3,*p4;
printf("\n Riya shah \t 170410107108 ");
s1=fopen("code.txt","r+");
p1=fopen("symbol.txt","w");
p2=fopen("literal.txt","w");
char ch;
while(!feof(s1))
{
fscanf(s1,"%d %s %s %s",&res.address,res.label,res.mnem,res.op);
if(strcmp(res.label,"NULL")!=0 )
{
strcpy(sy.symbol,res.label);
sy.address=res.address;
fprintf(p1,"%s \t%d\n",sy.symbol,sy.address);
}
if(strcmp(res.mnem,"LTORG")==0)
{
    strcpy(lit.value,res.op);
    fprintf(p2,"%d \t%s\n",++i,lit.value);
}
}
printf("symbol table created...\n");
fclose(s1);
fclose(p1);
fclose(p2);
p3=fopen("symbol.txt","r+");
ch=fgetc(p3);
while(ch!=EOF)
{
    printf("%c",ch);
    ch=fgetc(p3);
}
printf("Literal table created...\n");
p4=fopen("literal.txt","r+");
ch=fgetc(p4);
while(ch!=EOF)
{
    printf("%c",ch);
    ch=fgetc(p4);
}
fclose(p3);
fclose(p4);
return 0;
}
