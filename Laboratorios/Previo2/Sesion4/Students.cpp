#include <iostream>
using namespace std;

class Student{
    public:
        double marks;
        Student(double m){
            marks=m;
        }
};

void Promedio (Student s1, Student s2){
    double promedio = (s1.marks + s2.marks)/ 2;

    cout << "Promedio de notas: " << promedio << endl;
}

int main(){
     Student student1(88.0), student2(56.0);

     Promedio(student1,student2);

     return 0;
}