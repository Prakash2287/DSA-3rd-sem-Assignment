#include <stdio.h>


#define mx 5000

int main(void) {
    int N;
    scanf("%d",&N);
    if(N==1 || N==2)
    {
        printf("%d",1);
        return 0;
    }
    int temp1[mx]={0},temp2[mx]={0},result[mx]={0};
    temp1[mx-1]=1;
    temp2[mx-1]=1;
    for(int i=3;i<=N;i++)
    {
        int carry=0;
        
        for(int i=mx-1;i>=0;i--)
        {
            int digit=(temp1[i]+temp2[i])+carry;
            result[i]=digit%10;
            carry=digit/10;
        }
        
        for(int i=0;i<mx;i++){
            temp1[i]=temp2[i];
            temp2[i]=result[i];
            
        }
    }
    int chk=0;
    for(int i=0;i<mx;i++)
    {
        while(result[i]==0 && chk==0)
        {
            i++;
        }
        chk=1;
        printf("%d",result[i]);
    }
	return 0;
}

