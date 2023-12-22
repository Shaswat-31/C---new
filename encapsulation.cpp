#include<iostream>
using namespace std;
class exp{
    private:
    int salary;

    public:
    void set_salary(int s){
        salary=s;
    }
    void get_salary(){
        cout<<salary<<endl;
    }
};
int main(){
    exp emp1;
    emp1.set_salary(123);
    emp1.get_salary();
}