#include <stdio.h>
#include <stdlib.h>
struct charset{
    char s;
    int i;

};

void keyvalue(char* s , int* i){
    scanf("%c %d",s,i);

}
int main()
{
    int j;
    struct charset cs;
    keyvalue(&cs.s , &cs.i);

    return 0;
}