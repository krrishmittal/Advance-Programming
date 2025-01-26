#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
        swap(arr[l],arr[h]);
        l++,h--;
    }
}
int main(){
    int n;
    cout<<"enter the no of elemnts: ";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before reverse: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,n);
    cout<<"After reverse: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}