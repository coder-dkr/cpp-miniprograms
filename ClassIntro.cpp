#include<iostream>
using namespace std;

class emperor{
    private:
       int gold_coins;
       int & gc = gold_coins;

    public:
    int taxRate, queenCount;
    int & tr = taxRate, & qc = queenCount;
    void getData(int a,int b,int c);
    void showData(){

       cout<<"Number of coins: "<<gc<<endl;
       cout<<"Tax Rate: "<<tr<<"%"<<endl;
       cout<<"Number of Queens: "<<qc;
    
    }  

};

void emperor :: getData(int a,int b,int c){
    gc= a;
    tr=b;
    qc=c;
    cout<<"Data fetched from Empire's Office..."<<endl;
}

int main(){
    emperor kingRoro;
    kingRoro.getData(500,8,12);
    kingRoro.showData();
    
    return 0;
}


