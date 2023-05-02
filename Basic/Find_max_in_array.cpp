#include<bits/stdc++.h>
using namespace std;
int Find_Max(vector<int>arr){
    return *max_element(arr.begin(),arr.end());
}
int main(){
vector<int>arr = {1,3,5,2,5,7,10,2,1};
cout<<Find_Max(arr)<<endl;
return 0;
}