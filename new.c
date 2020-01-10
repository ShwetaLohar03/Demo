#include <stdio.h>
#include <stdlib.h>
#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))


struct student
{
    int rn;
    char name[20];
    float marks;
    double total;
};


int main()
{

    printf("Size of Structure is %d\n",sizeof(struct student));

    
    return 0;
}
