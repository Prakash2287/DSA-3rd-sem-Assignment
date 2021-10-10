#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// Question NO 2;

int main(void) {
    char c[100];
    scanf("%s",&c);
    int n=strlen(c);
    int numchk=0;
    int dotchk=-1;
    int otchk=0;
    int ats=-1;
    int fault=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
        if(c[0]=='.' || c[0]=='-' || c[0]=='@')
        {
            fault=1;
            break;
            
        }
        else if(c[0]>='0' || c[0]<='9')
        {
            fault=1;
            break;
        }
        }
        else if(i>0)
        {
            if(c[i]=='@')
            {
                ats=i;
            }
            
            
            else if(c[i]=='.')
            {
                dotchk=i;
            }
        }
        
    }
    
    
    if(fault==1)
    {
        printf("The email is invalid\n");
    }
    else if(ats==-1 || dotchk==-1)
    {
        printf("The email is invalid\n");
        
    }
    else if(ats>dotchk)
    {
        printf("The email is invalid\n");
        
        
    }
    else
    {
        printf("The email is valid\n");
    }
	return 0;
}

