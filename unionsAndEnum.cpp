#include<iostream>
using namespace std;

//unlike struct union share the space between its children and only occupy enough memory to adjust its largest child;
 union currency{
    int rupay;
    float dollar;
    char letter;
 };
 enum vars{
    a = 10,
    grade = 'a'
    };
int main(){
   
union currency heave;
heave.dollar = 56.78;
// heave.rupay = 23; //it can only store one so if this is in run mode, dollar will be overwritten

// cout<<heave.rupay<<"\n";
cout<<heave.dollar<<endl;

enum vars myvar = grade;
enum vars myvar1 = a;
cout<<myvar<<"\n"; //will give ascii values of a
cout<<myvar1;
    return 0;
}




