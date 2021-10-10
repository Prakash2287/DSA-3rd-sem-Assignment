#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Quick function for swapping the values
void swap( int* x,  int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


 // Function for Bubble sort
 void bubblesort(int a[],int n)
 {
     for(int i=0;i<n-1;i++)
     {
         for(int j=0;j<n-1-i;j++)
         {
             if(a[i]>a[j])
             {
                 swap(&a[i],&a[j]);
             }
         }
     }
 }
 
 
//  Function for the selection sort
void selectionsort(int a[],int n)
{
    int mx;
    for(int i=0;i<n-1;i++)
    {
        mx = i;

		for (int j = i + 1; j < n; j++)
			if (a[j] < a[mx])
				mx = j;
		swap(&a[mx], &a[i]);
        
    }
}

int main(void) {
    int n=50000;
    int t=4;
    printf("Press 1 for already sorted data and 2 for randomly data ordered\n");
    int sel;
    scanf("%d",&sel);
    printf("%d  Has been pressed\n",sel);
    if(sel==2)
    {
        while(t--)
        {
            int arr1[n],arr2[n];
            for(int i=0;i<n;i++)
            {
                int x=rand()%n+1;
                arr1[i]=x;
                arr2[i]=x;
            }
            
        clock_t start, end;

	   //Time for Selection sort
		start = clock();
		selectionsort(arr1, n);
		end = clock();
        int t1=end-start;

		// Time for Bubble sort
		start = clock();
		bubblesort(arr2, n);
		end = clock();
		int t2=end-start;
		
		printf("    %d         %f         %f\n",n,(double)t1/(double)CLOCKS_PER_SEC,(double)t2/(double)CLOCKS_PER_SEC);
		n += 50000;
        }
    }
    else if(sel==1)
    {
        while(t--)
        {
            int arr1[n],arr2[n];
            for(int i=0;i<n;i++)
            {
                arr1[i]=i;
                arr2[i]=i;
            }
            
            clock_t start, end;

	  //Time for Selection sort
		start = clock();
		selectionsort(arr1, n);
		end = clock();
       int t1=end-start;

		// Time for Bubble sort
		start = clock();
		bubblesort(arr2, n);
		end = clock();
        int t2=end-start;
        printf("    %d         %f         %f\n",n,(double)t1/(double)CLOCKS_PER_SEC,(double)t2/(double)CLOCKS_PER_SEC);
		n += 50000;
      
        }
    }
    
   
    
	
	return 0;
}

