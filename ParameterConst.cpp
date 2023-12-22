#include<iostream>
using namespace std;
class car{
    public:
    string name;
    string color;
    int number;

    car(string n,string c,int num){
        name=n;
        color=c;
        number=num;
    }
    car();
};
car::car(){
    cout<<"hello world"<<endl;
}
int main(){
    car toyota("cherry","blue",1234);
    cout<<toyota.name<<" "<<toyota.color<<" "<<toyota.number<<endl;
    car bmw;  
    return 0;
}