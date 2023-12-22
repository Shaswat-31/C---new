#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int number;

    void show(){
        cout<<"this is a car"<<endl;
    }
    void fav(int n);
};

void car::fav(int n){
    cout<<n+1<<endl;
}
int main(){
    car toyota;
    toyota.name="cherry";
    toyota.number=12345;

    cout<<toyota.name<<endl;
    cout<<toyota.number<<endl;

    toyota.show();
    toyota.fav(5);
}