// counting arrays elemnt in constant time 
// big O(1)



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[] = {2,4,8,10};
    int n;
    n = sizeof(a)/sizeof(int);
    printf("total number of elements in array:- %d",n);

    return 0;
}