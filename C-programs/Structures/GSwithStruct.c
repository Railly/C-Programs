#include <stdio.h>

int main(){
    //Typedef definition of Student Struct
    typedef struct Student
    {
        int id;
        char name[20];
        char courses[20];
        float fees;
    }Student; // Creating a template of the struct

    //Teacher Struct without typedef
    struct Teacher
    {
        int id;
        const char* name;
        const char* courses;
        float salary; 
    } teach1 = {200, "Rahul", "Physics", 400.0f};

    //Necessary declaration for create a Student variable
    Student stud1 = {100, "Jhon", "Math", 30000.0f};

    Student stud2 = {101, "Sam"};

    Student stud3;;
    printf("**Student 3**\n");
    printf("Insert ID: ");
    scanf("%d", &stud3.id);
    printf("Insert NAME: ");
    scanf("%s", stud3.name);
    printf("Insert COURSE: ");
    scanf("%s", stud3.courses);
    printf("Insert FEE: ");
    scanf("%f", &stud3.fees);

    struct Teacher teach2;
    teach2.id = 201;
    teach2.name = "Memphis";
    teach2.courses = "Chemistry";
    teach2.salary = 200.0f;

    //PRINTING
    printf("*****Teacher 1*****\n");
    printf("ID: %d\n", teach1.id);
    printf("Name: %s\n", teach1.name);
    printf("Courses: %s\n", teach1.courses);
    printf("Salary: %.1f\n", teach1.salary);

    printf("*****Teacher 2*****\n");
    printf("ID: %d\n", teach2.id);
    printf("Name: %s\n", teach2.name);
    printf("Courses: %s\n", teach2.courses);
    printf("Salary: %.1f\n", teach2.salary);

    printf("*****Student 1*****\n");
    printf("ID: %d\n", stud1.id);
    printf("Name: %s\n", stud1.name);
    printf("Courses: %s\n", stud1.courses);
    printf("Fees: %.1f\n", stud1.fees);

    printf("*****Student 2*****\n");
    printf("ID: %d\n", stud2.id);
    printf("Name: %s\n", stud2.name);
    printf("Courses: %s\n", stud2.courses); // Empty String: \0
    printf("Fees: %.1f\n", stud2.fees); // 0.0

    printf("*****Student 3*****\n");
    printf("ID: %d\n", stud3.id);
    printf("Name: %s\n", stud3.name);
    printf("Courses: %s\n", stud3.courses);
    printf("Fees: %.1f\n", stud3.fees);
}
