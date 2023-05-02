#include<bits/stdc++.h>
using namespace std;
//TIME COMPLEXITY O(NLOG(N)) SPACE S(1)

int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int i=1;
    sort(a.begin(),a.end());
    for(i; i < N ; i++){
        if(a[i-1] != i){
            return i;
        }
        
    }
    return i;
}
// USE HASHMAP OR HASHSET FOR OPTIMIZIED APPROACH

int main(){
 vector<int>arr = {1,2,3,5,6};
 cout<<missingNumber(arr,arr.size());
return 0;
}