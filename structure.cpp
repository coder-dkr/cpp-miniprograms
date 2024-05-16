#include<iostream>
#include<string>
using namespace std;

struct student{
    char grade;
    int rollno;
    int eval;
}; //do not forget the semicolon

int main(){
    struct student st1;
//    st1.grade = 'A';
//     st1.rollno = 12;
//     st1.eval = 9;

   struct student & g = st1; //reference variable
    g.grade = 'A';
    g.rollno = 12;
    g.eval = 9;
 
 cout<<st1.eval;
 // it works
    return 0;
}

