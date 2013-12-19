#include  <stdio.h>
#include  <string.h>

struct student
{
    char name[20];
    int age;
    char gender;
};

int main()
{
    struct student jim = {
        .name = "jim",
        .age = 30,
        .gender = 'm',
    };
    /* the relative offset of a container and its member is fixed always.
     * thus, if we have the address of a member, then we are able to calculate
     * the address of the container, then we are able to get the whole
     * member's address.
     *
     * */
    int offset = (char *)&(((struct student *)0)->age) - (char *)(struct student *)0;
    int *ptr_age = (int *)((char *)&jim + offset);
    printf("offset = %d\njim.age = %d\n",offset, *ptr_age);
    return 0;
}
