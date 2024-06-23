#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	 int L,i;
	 char s,before[10],after[10];
	 char alpha[10],beta[10];
	cout<<"\n Riya Shah \t 170410107108 ";
	cout<<"\n ENter the Starting Symbol: ";
    cin>>s;
	cout<<"\n Enter The String Before Production : ";
    cin>>before;
	cout<<"\n Enter The String After Production: ";
    cin>>after;
    L=strlen(after);
    int j=0,k=0;
    for(i=0;i<L;i++)
	 {
	    if(after[i]==before[i])
		{
		alpha[j]=after[i];
		j++;
		}
	else
	 {
		  beta[k]=after[i];
		  k++;
	  }
   }
	  alpha[j]='\0';
	  beta[k]='\0';
	cout<<"\n  Your Production is: " <<s<<"-->"<<before<<"|"<<after;
	cout<<"\n  Alpha: "<<alpha;
	cout<<"\n  Beta: "<<beta;
	cout<<"\n  "<<s<<"-->"<<alpha<<s<<"1";
	cout<<"\n  "<<s<<"1-->"<<beta<<"|"<<"NULL";
	return 0;
}
