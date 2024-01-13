#include<iostream>
using namespace std;

template<class T>

class Number{
    private:
    //Variable de tipo T

    T num;

    public:
    Number(T n) : num (n) {}//constructor

    T getNum(){
        return num;
    }
};

int main (){
    //crear objeto con objeto de tipo int

    Number<int> numberInt(7);

    //crear objeto con objeto de tipo Double

    Number <double> numberDouble(7.7);

    cout <<"numero de int= " << numberInt.getNum()<<endl;
    cout << "numero de double= " << numberDouble.getNum()<<endl;

    return 0;
}