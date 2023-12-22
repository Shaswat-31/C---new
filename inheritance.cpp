#include<iostream>
using namespace std;
class vehicle{
    public:
    string name="ford";

    void driver(){
        cout<<"not anyone can drive"<<endl;
    }
};
class car: public vehicle{
    int num=123;
};
int main(){
    car Mycar;
    cout<<Mycar.name<<endl;
}