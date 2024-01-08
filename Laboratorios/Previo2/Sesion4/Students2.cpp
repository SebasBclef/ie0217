#include <iostream>
using namespace std;

class Student{
    public:
        double marks1,marks2;
};

Student createStudent(){
    Student student;

    student.marks1 = 100;
    student.marks2 = 46.8;

    cout<<"Nota 1: "<< student.marks1 << endl;
    cout<<"Nota 2: "<< student.marks2 << endl;

    return student;

}

int main(){
     Student student1;

     student1 = createStudent();

     return 0;
}