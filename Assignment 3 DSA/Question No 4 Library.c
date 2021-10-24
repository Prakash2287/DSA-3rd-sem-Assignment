#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 1000000

//a
void insertItemAtLast(int a[], int n, int key) {
  a[n] = key;
  return;
}

//b
void insertItemAtFront(int a[], int n, int key) {
  for (int i = n; i > 0; i--)
    a[i] = a[i - 1];
  a[0] = key;
  return;
}

//c
void insertItemAtIndex(int a[], int n, int i, int key) {
  for (int x = n; x > i; x--)
    a[x] = a[x - 1];
  a[i] = key;
  return;
}

//d
void deleteItemFromLast(int a[], int * n) {
  -- * n;
  return;
}

//e
void deleteItemFromFirst(int a[], int n) {
  for (int x = 1; x < n; x++)
    a[x - 1] = a[x];
  return;
}

//f
void deleteItemFromIndex(int a[], int n, int i) {
  for (int x = i; x < n - 1; x++) {
    a[x] = a[x + 1];
  }
}


int FindItemUnsorted(int A[],int n,int key)
{
    int x;
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            x=i;
            break;
        }
    }
    return x;
}
int FindItemSorted(int A[],int n,int key)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>key)
        {
            x=i-1;
            break;
        }
    }
    return x;
}

void SortArray(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return;
}
//j
void extractSubset(int a[], int n, int i, int j) {
  for (int x = i; x <= j; x++)
    printf("%d ", a[x]);
  printf("\n");
  return;
}

//k
void deleteSubset(int a[], int n, int i, int j) {
  for (int x = i; x < n; x++) {
    if (x + j >= n)
      break;
    a[x] = a[x + j];
  }
  return;
}


// l)
void SplitintoTwoarray(int A[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    for(int i=n/2;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    
}

void Clonearray(int A[],int n,int B[])
{
    for(int i=0;i<n;i++)
    {
        B[i]=A[i];
    }
}

void ShiftLeftarray(int A[],int n,int r)
{
    int B[n];
    int c=0;
    for(int i=r;i<n;i++)
    {
        B[c]=A[i];
        c++;
    }
    for(int i=0;i<r;i++)
    {
        B[c]=A[i];
        c++;
    }
    for(int i=0;i<n;i++)
    {
        A[i]=B[i];
    }
}
void ShiftRightarray(int A[],int n,int r)
{
    int B[n];
    int c=0;
    for(int i=n-r;i<n;i++)
    {
        B[c]=A[i];
        c++;
    }
    for(int i=0;i<n-r;i++)
    {
        B[c]=A[i];
        c++;
    }
    for(int i=0;i<n;i++)
    {
        A[i]=B[i];
    }
}


void rotateArrayClockwise(int A[],int n,int r)
{
    ShiftRightarray(A,n,r);
}

void rotateArrayAntiClockwise(int A[],int n,int r)
{
    ShiftLeftarray(A,n,r);
    
}

int FindMin(int A[],int n)
{
    int x=0;
    int mn=MAX;
    for(int i=0;i<n;i++)
    {
        if(A[i]<mn)
        {
            mn=A[i];
            x=i;
        }
        
    }
    return x;
}
int FindMax(int A[],int n)
{
    int x=0;
    int mn=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>mn)
        {
            mn=A[i];
            x=i;
        }
        
    }
    return x;
}




void fillPseudoRandom(int a[], int n) {
  for (int i = 0; i < n; i++)
    a[i] = rand();
  return;
}


void fillTrueRandom(int a[], int n) {
  srand(time(0));
  for (int i = 0; i < n; i++)
    a[i] = rand();
  return;
}

void IncreaseArraySize(int A[],int n,int m)
{
    
    for(int i=0;i<m;i++)
    {
        if(i>=n)
        {
            A[i]=0;
        }
        
    }
}


void SetArrayToZero(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        A[i]=0;
    }
}


void DeleteAllItemOfArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        A[i]=0;
    }
}
int* AllocateArray(int A[],int n)
{
    int* p;
    p=(int*)malloc(n*sizeof(int));
    return p;
}
void DeleteArray(int A[],int n)
{
    free(A);
}



void printArray(int a[],int n){
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  printf("\n");
}


int main()
{
    
    // All the functions have been created above to act as a library
    return 0;
}





