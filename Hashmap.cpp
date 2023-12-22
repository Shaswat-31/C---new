#include<iostream>
#include<unordered_map> //or <map> for map
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int, int> mp; //or map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }

    /*int q;
    cin>>q;

    while(q--){
        int number;
        cin>>number;

        cout<<mp[number]<<endl;
    }*/
}