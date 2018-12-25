#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char *name;
    int age;
};

// typedef struct Student Student;
typedef struct
{
    char *name;
    int age;
} Student;

int main(int argc, char const *argv[])
{

    Student stu = {"zhangsan", 22};
    printf("name:%s,age:%d", stu.name, stu.age);
    return 0;
}
