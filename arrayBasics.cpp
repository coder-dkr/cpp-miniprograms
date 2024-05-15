#include<iostream>
using namespace std;

int main(){
    //printing items of an array
    int arr[] ={5,4,3,2,1}; 
    int arrLen = (sizeof(arr)/sizeof(arr[0]));
    for(int i = 0;i<arrLen;i++){
        cout<<arr[i]<<endl;
    }

    // inputing in array
    int arr2[5];
    for(int j = 0; j< 5;j++){ //will run 5 times
        cout<<"Enter "<<j+1<<" term of array:"; 
        cin>>arr2[j];
    }
    cout<<endl<<arr2[3]; //checking if terms are correctly inputed or not

    // array of characters
    char str[5];
    cout<<"enter your name (strictly 5 chars): ";
    cin>>str;
    int strlen = (sizeof(str)/sizeof(str[0]));
     for(int k = 0;k<strlen;k++){
        cout<<str[k];
    }
    

    return 0;
}

