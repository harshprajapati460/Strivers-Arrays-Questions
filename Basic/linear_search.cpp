#include<bits/stdc++.h>
using namespace std;
string Find_element(vector<int>arr,int target){
   for(auto it:arr){
    if(it == target) return "Present";

   }
   return "Not Present"; 
}
int main(){
vector<int>arr = {1,3,5,2,5,7,10,2,1};
int target = 5;
cout<<Find_element(arr,target)<<endl;
target = 9;
cout<<Find_element(arr,target)<<endl;
return 0;
}