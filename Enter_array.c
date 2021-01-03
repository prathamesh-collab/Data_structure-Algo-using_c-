#include <stdio.h>
#include <stdlib.h>
int main()
{   int arr[8];


    int n , i;
    printf("Enter the number of eleemnts\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for ( i = 0; i < n; i++)
    {
        printf("Element :- %d\n",arr[i]);
           /* code */
    }
    

    
    

    return 0;
}