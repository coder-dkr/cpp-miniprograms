#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age < 18 && age > 0){
        cout<<"You cannot buy this stuff [-_-]";
    }
    else if(age >= 18 && 48 > age){
        cout<<"Here you go mate, Have fun :) ";
    }
    else if(age >= 48){
       cout<<"Are chicha umar hogyi tumhari";
    }
    else{
        cout<<"Enter valud age";
    }


    return 0;
}



