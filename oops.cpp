#include<iostream>
#include<string>
 using namespace std;

 class Teacher {
    public:
    string name;
    string dept;
    float salary;

    void showInfo(){
        cout<<"name is : "<<name<<endl;
        cout<<"slary is : "<<salary<<endl;
        cout << "department is : " << dept << endl;

   
    };
 };

 class Animal {
public:
    void sound (){
        cout<<"I can make sound"<<endl;
    }
 };

 
class cat : public Animal{
    
}

 int main (){
    // cout<<"hello I am learning oops in cpp"<<endl;
Teacher t1;
t1.name = "Rohit";
t1.salary= 200000;
t1.dept = "Advance Learning";
// t1.showInfo();

// cout<<t1.showInfo()<<endl; => wrong way this will print the return value 
Animal dog;
dog.sound();
return 0;
 }
