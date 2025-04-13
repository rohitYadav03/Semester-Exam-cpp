#include<iostream>
#include<string>

using namespace std;

class Aniaml{
   public : 
    virtual void speak () = 0; // pure virtual function
};

// ✅ A class becomes an abstract class if:
// It has at least one pure virtual function.



class dog : public Aniaml {
public:
    void speak  () override {
        cout<<"can bark"<<endl;
    }
};

int main (){
dog d1;
d1.speak();
}