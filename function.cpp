#include<iostream>
using namespace std;

void min (int a , int b){
   if(a < b){
    cout<<"A is minimun";
   }
   else{
    cout<<"B is Minimum";
   }
}

void sumN (int n){
    int sum = 0;
   for(int i=0 ; i<=n; i++){
    sum +=i;
   }
   cout<<"sum is : "<<sum<<endl;
}

bool checkPrime (int number){

    if(number <= 1){
        return false;
    };
    
     if(number == 2){
        return true;
    }

    if(number %2 ==0){
        return false;
    }

    for(int i =3; i<number ; i= i+2){
        if (number%i == 0)
        {
return false;
        }
        
    }
    return true;
}

int main (){
// min(100,200);
// sumN(5);

int num;
cout<<"Enter Number : ";
cin>>num;
if(checkPrime(num)){
    cout<<num<<"  is Prime"<<endl;
}
else{
    cout<<num<<" is not prime"<<endl;
}

return 0;
 }