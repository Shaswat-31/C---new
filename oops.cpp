#include<iostream>
using namespace std;

class School{
    public:
    string subject;
    int clas;
    School(string,int);
};

School::School(string s,int c){
    subject=s;
    clas=c;
}

class students:public School{
    public:
    int marks;
    students(int m):School("math",6){
        marks=m;
    }
};
int main(){
    students s1(50);
    cout<<s1.marks<<endl;
    cout<<s1.subject<<endl;
    cout<<s1.clas<<endl;
}