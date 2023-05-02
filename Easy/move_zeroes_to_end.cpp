#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    int count  = 0;
    vector<int>ans;
    for(int i = 0 ; i<n; i++){
        if(a[i] == 0) count++;
        else ans.push_back(a[i]);
    }
    while(count > 0){
        ans.push_back(0);
        count--;
    }
    return ans;
}

int main(){
vector<int>arr = {10,2,2,0,6,0,4,0,0,2,7,8};
int n = arr.size();
for(auto it:arr){
    cout<<it<<" ";
}
cout<<endl;
vector<int>ans  = moveZeros(n,arr);
for(auto it:ans){
    cout<<it<<" ";
}
return 0;
}