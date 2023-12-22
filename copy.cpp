#include<iostream>
#include<cstring>
using namespace std;

class man{
    public:
    int age;
    char*name;
    man(int age,char*name){
        this->age=age;//shallow copy

        //deep copy
        this->name=new char(strlen(name)+1); //creates a new memory location
        strcpy(this->name,name); 
    }
};

int main(){
    char name[]={"shaswat"};
    man m1(42,name);
    cout<<m1.age<<" "<<m1.name<<endl;

}