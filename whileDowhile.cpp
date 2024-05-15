#include<iostream>
using namespace std;

int main(){
    int num ,i = 0;
    cout<<"Enter the number of time you want neko to meow: ";
    cin>>num;

    while(i < num){
        cout<<"Meow"<<endl;
        i++;
    }
    cout<<endl;
    // i = 0; //you can reset i's value
    //or we can use do-while which will run the code atleast 1 time;
    do{
       cout<<"Meow"<<endl;
        i++; 
    }while(i<num); //it will run only one time as i already catched up to the value of num;

    return 0;
}


