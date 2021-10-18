#include<stdio.h>
#include<string.h>



int main(){

  while(1){
    int select;
    
    printf("Select an option : \n1. Addition \n2. Multiplication \n3. Exit\n");
    
   
    scanf("%d",&select);
    if(select == 1){
      char unary1[100], unary2[100],temp[100];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary1, unary2);
      strcpy(temp,unary2);
      strcat(unary2, unary1);
      printf("The sum of  %s and %s is : %s\n",unary1, temp, unary2);
      break;
    }
    else if(select == 2){
      char unary1[100], unary2[100];
      printf("Enter two unary numbers: ");
      scanf("%s %s", unary1, unary2);
      printf("The product of %s and %s  is: ",unary1,unary2);
       for(int i=0; i<strlen(unary1);i++){
         printf("%s", unary2);}
       printf("\n");
      break;
      

    }
    else {
      printf("Exited.");
      break;
    }
  }

  return 0;
}