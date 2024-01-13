#include <iostream>
using namespace std;

//Class template con parametros multiples y parametros default

template <class T, class U, class V = char>
class ClassTemplate {

    private:
    T var1;
    U var2;
    V var3;

    public:
    ClassTemplate(T v1, U v2, V v3): var1(v1), var2(v2), var3(v3){}

        void printVar(){
            cout<<"var1 = "<< var1 <<endl;
            cout<<"var2 = "<< var2 <<endl;
            cout<<"var3 = "<< var3 <<endl;
        }
    };

int main(){
    //creando objeto con int, double y char types.

    ClassTemplate<int,double> obj1(7,7.7,'c');
    cout<<"Valores de obj1 = "<< endl;
    obj1.printVar();

    //creando objeto con int, double y bool types
    ClassTemplate<double,char,bool> obj2(8.8,'a',false);
    cout<<"\nValores de obj2 = "<< endl;
    obj2.printVar();

    return 0;


}