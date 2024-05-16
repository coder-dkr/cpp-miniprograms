#include<iostream>
using namespace std;

int sum(int,int); //function prototype -> it tells the complier that there exists a function later in the code


int subt(int x, int y){
    return x-y;
}  //we can also write the functipn here itself

int main(){
     int a,b;
     cout<<"enter first number: ";
     cin>>a;
     cout<<"enter second number: ";
     cin>>b;

     cout<<"Sum is: "<<sum(a,b)<<endl;
     cout<<"diff is: "<<subt(a,b);

    return 0;
}

int sum(int a,int b){
    return a+b;
}


