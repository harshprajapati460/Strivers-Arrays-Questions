#include<bits/stdc++.h>
using namespace std;
string Check_sorted(vector<int>arr){
   for(int i=0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]) return "NO";

   }
   return "YES";
}
int main(){
vector<int>arr = {1,3,5,2,5,7,10,2,1};
cout<<Check_sorted(arr)<<endl;
sort(arr.begin(),arr.end());
cout<<Check_sorted(arr)<<endl;
return 0;
}