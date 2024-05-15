#include<iostream>
using namespace std;

int main(){
    char grade;
    cout<<"Enter your grade (A,B,C,D) :";
    cin>>grade;

    switch(grade){
        case 'A':{
        cout<<"Congrates you got A grade";
        break;
        }
        case 'B':{
        cout<<"Congrates you got B grade";
        break;
        } 
        case 'C':{
        cout<<"Work Hard you got C grade";
        break;
        } 
        case 'D':{
        cout<<"Very Poor you got D grade";
        break;
        } 
        default: {
            cout<<"Enter Valid grade";
        }
    }



    return 0;
}

