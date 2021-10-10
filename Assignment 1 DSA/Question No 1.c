#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// Question NO 1;

int main(void) {
    
    char c[100];
    scanf("%s",&c);
    int n=strlen(c);
    int dbchk=0;
    int chk=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='.')
        {
            chk++;
            if(i==n-1)
            {
                dbchk=1;
                
            }
        }
    }
    if(chk>1 || chk==0)
    {
        printf("Invalid Floating Number");
        
    }
    else if(dbchk==1)
    {
        printf("Invalid Floating Number");
    }
    else
    {
        printf("Valid Floating Number");
    }
    
    
	
	return 0;
}

