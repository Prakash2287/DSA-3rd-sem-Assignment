// Submitted by 2012086
#include <stdio.h>
#include<string.h>
#define mod 1000000009
int genhashval(char s[])
{
    int p=31;
    int x=strlen(s);
    int ans=0;
    int xp=1;
    for(int i=0;i<x;i++)
    {
        ans+=(((s[i]-'A'+1)*xp))%mod;
        xp=(xp*p)%mod;
    }
    return ans;
    
    
}

int main(void) {
    char s[1000];
    printf("Enter the string\n");
    scanf("%s",&s);
    int x=genhashval(s);
    printf("%d\n",x);
    
	// your code goes here
	return 0;
}

