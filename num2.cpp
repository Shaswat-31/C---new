#include<iostream>
using namespace std;
class student{
    public:
    int age;
    int roll;

    private:
    int pass;

    public:

    void setResult(int p){
        pass=p;
   
    }

    void getResult(){
             if(pass==123){
            cout<<"access granted"<<endl;
        }
        else{
            cout<<"access denied"<<endl;
        }
    }
    

};