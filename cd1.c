#include <stdio.h>
#include <stdlib.h>
#define FILENAME "1.txt"
int main() {
   FILE *fp;
   char ch[1000];
   int i=2,single=0,multi=0;
   fp=fopen(FILENAME,"r");
   if(fp==NULL) {
      printf("File \"%s\" does not exist!!!\n",FILENAME);
      return -1;
   }
   printf("\n File contents: \n \n");
   while (fgets(ch,1000, fp) != NULL)
    {
        printf("%s",ch);
            if(ch[0]=='/')
            {
                if(ch[1]=='/')
                {
                      single++;
                }
            else if(ch[1]=='*')
            {
                  for(i=2;i<=1000;i++)
                  {
                        if(ch[i]=='*'&&ch[i+1]=='/')
                        {
                              multi++;
                              break;
                        }
                        else continue;
                  }
            }
            }
    }
    int sum=single+multi;
   fclose(fp);

   printf("\n \n no of comments is: %d. There are %d single line and %d multi-line comments \n ",sum,single,multi);
   return 0;
}
