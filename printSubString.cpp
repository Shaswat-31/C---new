#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char input[]="abc";
    int l=strlen(input);
    for(int i=0;i<l;i++){
        string s="";
        for(int j=i;j<l;j++){
            s=s+input[j];
            cout<<s<<endl;
        }
    }
}