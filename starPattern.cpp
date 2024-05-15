#include <iostream>
using namespace std;
int main(){

int  i, j, n;
    cout << "Enter number of rows:  ";
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            for(int k = n;k>0;k--){
                cout<<" ";
            }
            cout << "* ";
            }
    //Ending line after each row
         cout << "\n";
}
return 0;
}

