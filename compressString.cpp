#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str;
    cout<<"enter a string : "<<endl;
    getline(cin,str);
    int l=str.length();
    cout<<l<<endl;
    int count=1; int i=0;
    string out="";
    while(i<l){
        count=1;
        char ch=str[i];
        while((str[i]==str[i+1])&&(i<l-1)){
            count++;
            i++;
        }
        if(count>1){
        out+=ch+to_string(count);
        i++;}
        else{
        out+=ch;
        i++;
        }
    }
    cout<<"answer : ";
    cout<<out;
}