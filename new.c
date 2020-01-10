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
    int struct student s = {101,"Shweta",70.00,70.00};
    int struct student s1 = {102,"Shruti",75.20,75.20};

    printf("Size of Structure is %d\n",sizeof(struct student));
    
    printf("Offset of name = %d", OFFSETOF(s,name));
    
    printf("----------Student Data----------\n");
    printf("Roll no\t%d\n Name\t%s\n Marks\t%f\n Total\t%lf\n",s.rn,s.name,s.marks,s.total);
    printf("Roll no\t%d\n Name\t%s\n Marks\t%f\n Total\t%lf\n",s1.rn,s1.name,s1.marks,s1.total);

    
    return 0;
}
