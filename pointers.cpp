#include<iostream>
using namespace std;

int main(){
    int a = 45;
    int* ptr = &a;
    int** ptrToptr = &ptr;


    cout<<"Value of a :"<<a<<endl;
    cout<<"Value of a :"<<*ptr<<endl;
    cout<<"value of a :"<<**ptrToptr<<endl;
    cout<<"addresss of a :"<<ptr<<endl;
    cout<<"addresss of a :"<<&a<<endl;
    cout<<"value of ptr // address of a :"<<*ptrToptr<<endl;


    return 0;
}

