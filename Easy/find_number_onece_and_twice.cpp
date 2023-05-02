#include<bits/stdc++.h>
using namespace std;
//TIME COMPLEXITY O(N(LOG(N)))
int getSingleElement(vector<int> &arr){

	int n= arr.size();
	int low = 0,high = n-1,mid;
	if(arr[0] != arr[1]) return 0;
	else if(arr[high] != arr[high-1]) return high;

    while(low <= high){
		mid = low + (high-low)/2;
		if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
			return arr[mid];
		}
		else if(arr[mid] != arr[mid+1] && mid%2 == 0 || mid%2 == 1 && arr[mid] != arr[mid-1]){
			high = mid-1;
		}
		else low = mid+1;
	}
	return low;

}
int main(){

vector<int>arr = {8,8,9,9,10};
cout<<arr[getSingleElement(arr)];
return 0;
}