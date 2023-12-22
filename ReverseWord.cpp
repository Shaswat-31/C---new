#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"Enter string of characters\n";
    char s[100];
    cin.getline(s,100);
    int l=strlen(s);
    int k=l-1;
    bool b=true;
    for (int i = l-1; i >=0; i--)
    {
        if(s[i]==' '){
           for(int j=i+1;j<=k;j++){
            cout<<s[j];
           }
           if(b==true){
           cout<<" ";
           b=false;}
           k=i;
        }
    }
    for(int i=0;i<k;i++){
        cout<<s[i];
    }

}