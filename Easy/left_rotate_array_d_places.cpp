#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int k;
    cin>>k;
    
    while(k-->0){
        int x = arr[0];
    for(int i=0; i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = x;
    
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    

    return 0;
}