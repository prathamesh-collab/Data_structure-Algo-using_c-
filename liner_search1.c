#include<stdio.h>


int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main()


{
    int arr[] = {2,5,8,18,65,7,55};
    int size = sizeof(arr)/sizeof(int);
    int element = 8;
    int searchindex = linearSearch(arr,size,element);
    printf("The elemet %d was found at index %d\n",element,searchindex);
    
    
    return 0;
}