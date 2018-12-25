#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char *name;
    int age;
};

typedef struct _Student
{
    char *name;
    int age;
} Student;

void fn1()
{
    Student s1 = {"zhangsan", 22};
    Student s2 = s1;
    printf("s1-->(name:%s,age:%d),s2-->(name:%s,age:%d)\n", s1.name, s1.age, s2.name, s2.age);
    s2.age = 11;
    printf("s1-->(name:%s,age:%d),s2-->(name:%s,age:%d)\n", s1.name, s1.age, s2.name, s2.age);
}

void fn2()
{
    Student s1 = {"zhangsan", 22};
    Student *s2 = &s1;
    printf("s1-->(name:%s,age:%d),s2-->(name:%s,age:%d)\n", s1.name, s1.age, s2->name, s2->age);
    s2->age = 11;
    printf("s1-->(name:%s,age:%d),s2-->(name:%s,age:%d)\n", s1.name, s1.age, s2->name, s2->age);
}

void fn3()
{
    Student *s1 = malloc(sizeof(Student));
    s1->name = "zhangsan";
    s1->age = 33;
    Student *s2 = s1;
    printf("s1-->(name:%s,age:%d),s2-->(name:%s,age:%d)\n", s1->name, s1->age, s2->name, s2->age);
    s2->age = 11;
    printf("s1-->(name:%s,age:%d),s2-->(name:%s,age:%d)\n", s1->name, s1->age, s2->name, s2->age);
}

Student *createStudent(char *name, int age)
{
    Student *s1 = malloc(sizeof(Student));
    s1->name = name;
    s1->age = age;
}

void deleteStudent(Student *stu)
{
    free(stu);
}

int main(int argc, char const *argv[])
{
    Student *s1 = createStudent("haha", 66);
    printf("s1-->(name:%s,age:%d)\n", s1->name, s1->age);
    deleteStudent(s1);
    return 0;
}
