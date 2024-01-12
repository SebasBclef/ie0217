#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> student;

    //Usando el [] para agregar elementos

    student [1] = "Sebastian";
    student [2] = "Andres";

    //Usando insert() method to add elements
     student.insert(make_pair(3, "Alejandro"));
     student.insert(make_pair(4, "Valeria"));

     //anadir elementos con keys duplicados

     student[5] = "Dalad";
     student[5] = "Carlos";

     for (int i=1; i <= student.size();++i){
        cout<< "Student [" << i <<"]:"<< student[i]<< endl;
     }

    return 0;
}