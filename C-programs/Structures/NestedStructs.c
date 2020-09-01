#include <stdio.h>

int main(){
    
    typedef struct 
    {
        const char* first_name;
        const char* mid_name;
        const char* last_name;
    } NAME;

    typedef struct
    {
        int dd;
        int mm;
        int yyyy;
    } DATE;

    typedef struct 
    {
        int id;
        const char* courses;
        float fees;
        NAME name;
        DATE birthday;
    } Student;
    
    Student stud1;
    stud1.id = 101;
    stud1.name.first_name = "Aleks";
    stud1.name.mid_name = "Khron";
    stud1.name.last_name = "Smith";
    stud1.courses = "BCA";
    stud1.birthday.dd = 29;
    stud1.birthday.mm = 5;
    stud1.birthday.yyyy = 1990;
    stud1.fees = 1000.0;

    printf("***** STUDENT DETAILS *****");
    printf("\n ID: %d", stud1.id);
    printf("\n COURSE: %s", stud1.courses);
    printf("\n FEES: %.1f", stud1.fees);
    printf("\n NAME: %s %s %s", stud1.name.first_name, stud1.name.mid_name, stud1.name.last_name);
    printf("\n BIRTHDAY: %d/%02d/%d\n", stud1.birthday.dd, stud1.birthday.mm, stud1.birthday.yyyy);
}