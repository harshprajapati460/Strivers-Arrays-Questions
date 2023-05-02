#include<bits/stdc++.h>
using namespace std;
//METHOD 1 
// Use two for loops TIME COMPLEXITY O(N^2) SPACE S(1)

bool Method_1(vector<int>arr,int n,int target){
      for(int i = 0; i < n ; i++){
        for(int j=0 ; j < n ; j++){
            if(arr[i]+arr[j]) return true;

        }

      }
      return false;
}

//METHOD 2
// USE A HASHMAP OR SET TO STORE THE VALUES OF ARRAYS
// ITERATE OVER ARRAY AND FIND TARGET - ARR[I] IF FOUND RETURN TRUE
// IF NOT FOUND IN THE ARRAY RETURN FALSE
// TIME COMPLEXITY O(N) SPACE COMPLEXITY S(N)

bool Method_2(vector<int>arr,int n,int target){
    set<int>s;
    for(auto it:arr){
        s.insert(it);
    }
    for(int i=0; i<n ;i++){
        if(s.find(target-arr[i]) != s.end()){
            return true;
        }
    }
    return false;
}

// METHOD 3
// ITERATE OVER THE ARRAY AND FOR FINDING THE TARGET - ARR[I] USE BINARY SEARCH
// TIME COMPLEXITY O(NLOG(N)) SPACE COMPLEITY S(1)

bool Method_3(vector<int>arr,int n,int target){
     sort(arr.begin(),arr.end());
    for(int i=0 ; i<n ; i++){
        int q = target - arr[i];
        int low=0,high = n-1,mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(arr[mid] == q) return true;
            else if(arr[mid] > q) high = mid -1;
            else low = mid+1;
        }
    }
    return false;
}

int main(){
vector<int>arr = {10,2,2,6,4,2,7,8};
int target = 6;
for(auto it:arr){
    cout<<it<<" ";
}
int n = arr.size();
cout<<endl;
cout<<Method_1(arr,n,target)<<endl;
cout<<Method_2(arr,n,target)<<endl;
cout<<Method_3(arr,n,target)<<endl;
return 0;
}