#include<bits/stdc++.h>
using namespace std;
// void count(int arr[i],int n,vecto<bool> &visited){
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             c
//         }
//     }
// }
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second;
    }
    
    return 0;
}