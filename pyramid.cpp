#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows : "<<endl;
    cin>>n;
    //inverted pyramid
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=n-i;k>=1;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    //hollow pyramid
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=n-i;k>=1;k--){
            if(i==0|| i==(n-1) || k==(n-i) || k==1 ){
                cout<<"* ";}
            else
                cout<<"  ";
            
        }
        cout<<endl;
    }

}