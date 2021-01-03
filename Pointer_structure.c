// if the size of the structure is very large then passing the copy of the whole structre is not efficient 

// Better choice is :- Pass the address of the structure
#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;

};
void print(struct point *ptr){
    printf("%d %d \n",ptr->x , ptr->y);

}

int main()
{
    struct point p1 = {20,40};
    struct point p2 = {50,60};

    print(&p1);
    print(&p2);

    return 0;
}