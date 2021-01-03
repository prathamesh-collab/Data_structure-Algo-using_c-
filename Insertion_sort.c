#include<stdio.h>
#include<stdlib.h>
void printArray(int* A ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("Array's Element at index %d :- %d\n",i ,A[i]);

    }
    
}
void Insertionsort(int *A,int n){
    int key , j;
    // loops for passes 
    for (int i = 0; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;

        // loops for each pass
        while(j>=0 && A[j]> key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key ;



        }
    }
    

int main()
{
    int A[] = { 12 , 54 , 65 ,7  , 23 ,9 };
    int n = 6;
    printArray(A,n);
    Insertionsort(A,n);
    printArray(A,n);
    

    return 0;

}