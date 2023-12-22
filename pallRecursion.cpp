#include<iostream>
#include<cstring>
using namespace std;

bool check(string str, int s, int e){
    if(s==e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }

    if(s<e+1){
        check(str,s+1,e-1);
    }

    return true;
}

bool isPal(string input){
    int n=input.length();
    if(n==1){
        return true;
    }

   return check(input,0,n-1);
}

int main(){
    string s;
    cout<<"enter a word"<<endl;
    getline(cin,s);

    int x=isPal(s);
    if(x==1)
    cout<<"true";
    else
    cout<<"false";
}