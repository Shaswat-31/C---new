#include<iostream>
using namespace std;
class example{
    public:
    int roll;
    char* name; //pointer thats why every object shares the same name array in main function

    void print(){
        cout<<name<<" "<<roll<<endl;
    }
};
int main(){
    char name[]="misha";
    example s1;
    s1.name=name;
    s1.roll=101;

    name[0]='N';
    example s2;
    s2.name=name;
    s2.roll=102;

    s1.print();
    s2.print();

}