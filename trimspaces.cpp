#include<iostream>
#include<cstring>
using namespace std;

void trim(char input[]){
     int l=strlen(input);
    int j=0;
    for(int i=0;input[i]!='\0';i++){
        if(input[i]!=' '){
            input[j]=input[i];
            j++;
        }
    }
    input[j]='\0';
}

int main(){
    char input[1000];
    cin.getline(input,1000);
   trim(input);
   cout<<input;
}