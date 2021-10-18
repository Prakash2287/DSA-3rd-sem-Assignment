#include <stdio.h> 

int main() 
{   
  int num, rem;
    int a,b;
    printf("Enter the Choice :\n");
    printf("1.Addition\n2.Multiplication\n");
    int select;
    scanf("%d",&select);
    
    scanf("%d", &a);

    scanf("%d", &b);
    if(select==1){
        num=a+b;
        printf("The addition is equal to in\n");
    }
    else if (select==2){
        num=a*b;
        printf("The product is equal to in\n");
    }
    
    printf("Roman numerals: ");        

    while(num != 0)
    {

        if (num >= 1000)       
        {
           printf("M");
           num -= 1000;
        }

        else if (num >= 900)   
        {
           printf("CM");
           num -= 900;
        }        

        else if (num >= 500)  
        {           
           printf("D");
           num -= 500;
        }

        else if (num >= 400)   
        {
           printf("CD");
           num -= 400;
        }

        else if (num >= 100)   
        {
           printf("C");
           num -= 100;                       
        }

        else if (num >= 90)    
        {
           printf("XC");
           num -= 90;                                              
        }

        else if (num >= 50)    
        {
           printf("L");
           num -= 50;                                                                     
        }

        else if (num >= 40)    
        {
           printf("XL");           
           num -= 40;
        }

        else if (num >= 10)    
        {
           printf("X");
           num -= 10;           
        }

        else if (num >= 9)     
        {
           printf("IX");
           num -= 9;                         
        }

        else if (num >= 5)     
        {
           printf("V");
           num -= 5;                                     
        }

        else if (num >= 4)     
        {
           printf("IV");
           num -= 4;                                                            
        }

        else if (num >= 1)     
        {
           printf("I");
           num -= 1;                                                                                   
        }

    }

    return 0;
}