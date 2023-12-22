#include<iostream>
using namespace std;

class complexNumber{
    public:
        int real;
        int imag;

    complexNumber(int r,int i){
        real=r;
        imag=i;
    }

    void plus(complexNumber c2){
        int real_sum=this->real+c2.real;
        int imag_sum=this->imag+c2.imag;
        this->real=real_sum;
        this->imag=imag_sum;
        if(imag<0){
            cout<<real_sum<<" "<<"-"<<" "<<"i"<<abs(imag_sum)<<endl;
        }
        else{
            cout<<real_sum<<" "<<"+"<<" "<<"i"<<imag_sum<<endl;
        }
    }
    
    void multiply(complexNumber c2){
        int real_part=(this->real*c2.real)-(this->imag*c2.imag);
        int imag_part=(this->real*c2.imag)+(this->imag*c2.real);
        this->real=real_part;
        this->imag=imag_part;

        if(imag_part<0){
            cout<<real_part<<" "<<"-"<<" "<<"i"<<abs(imag_part)<<endl;
        }
        else{
            cout<<real_part<<" "<<"+"<<" "<<"i"<<imag_part<<endl;
        }

    }
};

int main(){
    complexNumber c1(3,5);
    complexNumber c2(0,7);
    c1.plus(c2);
    
}