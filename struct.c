#include<stdio.h>
#include<string.h>
// userdefined
struct student{
    int roll;
    float cgpa;
    char name [100];

};
int main()
{
    struct student s1;
    s1.roll = 1664;
    s1.cgpa =9.25;
    // s1.name = "waqar";
    strcpy(s1.name, "Waqar");

printf("student name = %s\n, s1.name");
printf("student rollno = %d\n, s1.roll");
printf("student cgpa = %f\n, s1.cgpa");

    return 0;
}