#include<iostream>
using namespace std;
int cnt=0;
int countZero(int n){
    if(n==0 && cnt==0)
    return 1;
    
    cnt++;

    if(n==0 && cnt!=0){
        return 0;
    }
    if(n%10==0 && n!=0)
    return 1+countZero(n/10);

    return countZero(n/10);
}

int main(){
    cout<<countZero(101);
}

