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
    s1.roll = 21;
    s1.cgpa =9.25;
    // s1.name = "waqar";
    strcpy(s1.name, " Mohd Waqar");

printf("Student name = %s\n", s1.name);
printf("Student rollno = %d\n", s1.roll);
printf("Student cgpa = %f\n", s1.cgpa);


    struct student s2;
    s2.roll = 34;
    s2.cgpa =8.98;
    // s1.name = "waqar";
    strcpy(s2.name, "Rizwan Ahmed");

printf("Student name = %s\n", s2.name);
printf("Student rollno = %d\n", s2.roll);
printf("Student cgpa = %f\n", s2.cgpa);


    struct student s3;
    s3.roll = 38;
    s3.cgpa =9.89;
    // s1.name = "waqar";
    strcpy(s3.name, "Arif Mir");

printf("Student name = %s\n", s3.name);
printf("Student rollno = %d\n", s3.roll);
printf("Student cgpa = %f\n", s3.cgpa);

    return 0;
}