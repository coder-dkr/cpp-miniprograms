#include<iostream>
using namespace std;

int main(){
    int n,i,j;
   cout<<"Enter the number: ";
   cin>>n;

   for(i = n;i>0;i--){
    for(j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<"\n";
   }


    return 0;
}


