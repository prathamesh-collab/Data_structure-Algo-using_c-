#include <stdio.h>
#include <stdlib.h>
/*struct point {
    int x;
    int y;

};
void print(struct point arr[]){
    int i;
    for ( i = 0; i < 2; i++)
    
        printf("%d %d\n",arr[i].x , arr[i].y);


    

    
}

int main()
{
    struct point arr[2] = {{1,2} , {3,4}};


    print(arr);

    return 0;
}
*/

struct point {
    int x;

};

void print(struct point arr[]){
    int i;
    for ( i = 0; i < 3; i++)

    {
        printf("%d \n",arr[i].x);

        /* code */
    }

    
}
int main(){
    struct point arr[] = {2,4,8};
    print(arr);
    return 0;

}