#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
   
    int x = arr[0];
    for(int i=0; i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = x;
    return arr;
}  

int main(){
vector<int>arr = {1,3,5,2,5,7,10,2,1};
vector<int>ans = rotateArray(arr,arr.size());
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}