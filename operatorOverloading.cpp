#include<iostream>
using namespace std;

class Complex {
    private:
    int real, imag;
    public:

    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(int r, int i){
        real = r;
        imag = i;
    }
    void print(){
        cout<<real <<" + "<<imag<<"i"<<endl;
    }
};
int main (){

    Complex c1(5,4);

    int x = 5;
    int y = 4;
    int z = x +y ;
    cout<<"z value : "<<z <<endl;

    return 0;
}