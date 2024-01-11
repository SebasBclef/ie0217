#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float*ptr;

    //Apartando memosia para el numero 'num' de floats

    ptr = new float[num];

    cout<< "Enter GPA of students. " << endl;
    for (int i=0; i <num;++i){
        cout << "Student" << i+1 <<": ";
        cin >> *(ptr+i);
    }

    cout<<"\nDisplaying GPA of students"<<endl;
    for (int i=0; i < num; ++i){
        cout<< "Student"<< i+1 << ": "<< *(ptr+i)<<endl;
    }

    //liberar memoria del puntero
 
delete[] ptr;

return 0;
}