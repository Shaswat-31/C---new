#include<iostream>
using namespace std;
#include "num2.cpp"

int main(){
    student *s1=new student();
    student s2;
    (*s1).age=23;
    s1->roll=44;

    s2.age=46;
    s2.roll=90;

    cout<<s1->age<<" "<<(*s1).roll<<" "<<s2.age<<" "<<s2.roll<<endl;  


     cout<<"enter pass"<<endl;

    s1->setResult(231);
    
    (*s1).getResult();
     
     

     cout<<"try again"<<endl;

    s1->setResult(123);
    (*s1).getResult();


}