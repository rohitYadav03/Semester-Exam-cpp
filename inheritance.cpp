#include <iostream>
#include <string>

using namespace std;

// class Vehicle  {
//     public:

//     void start (){
//         cout<<"Vehicle started";
//     };

//     void stop (){
//         cout<<"Vehicle  stopped";
//     }

// };

// class Car : public Vehicle{
// public:
//     void drive ()
// {
// cout<<"Car is driving";
// }
// };

class Person {
    private :
    string name;

    protected :
    int age;

    public:
    Person(string n, int a){
        this->name = n;
        this->age = a;
    }

    string getName(){
       return name;
    }
};

class Employee : public Person {
    private :
    string department;

    public:
    Employee(string n , int a , string d): Person(n, a){
     this->department = d;
    }

    string getDepartment(){
      return  department;
    }

};

class Manager : public Employee {
    private: 
    int teamSize;

public:
    Manager(string n , int a , string d , int s): Employee(n,a,d){
    this->teamSize = s;
    }
    void display (){
        cout<<"Name : "<<getName()<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Department : "<<getDepartment()<<endl;
        cout<<"Team Size : "<<teamSize<<endl;
    }

};

int main (){
// Car car;
// car.start();
// car.stop();
// car.drive();

Manager m("Rohit", 25, "IT", 5);
m.display();

}