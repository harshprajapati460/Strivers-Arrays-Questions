#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	int i=1,k=1;
	while(i < n){
       if(arr[i-1] != arr[i]){
            arr[k++] = arr[i];
	   }
	   i++;
	}
	return k;
}
int main(){
vector<int>arr = {1,2,2,2,4,4,5,6,7,7,8};
int n = arr.size();
for(auto it:arr){
    cout<<it<<" ";
}
cout<<endl;
int i = removeDuplicates(arr,n);
for(int j=0 ; j <=i ; j++){
    cout<<arr[j]<<" ";
}
return 0;
}                                                                                                                