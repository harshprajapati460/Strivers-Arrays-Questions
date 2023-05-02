#include<bits/stdc++.h>
using namespace std;

// Effiecient Approcach O(n)
// 1) Initialize the first as 0(i.e, index of arr[0] element
// 2) Start traversing the array from array[1],
//    a) If the current element in array say arr[i] is greater
//       than first. Then update first and second as,
//       second = first
//       first = arr[i]
//    b) If the current element is in between first and second,
//       then update second to store the value of current variable as
//       second = arr[i]
// 3) Return the value stored in second

int secondLargest(vector<int>arr, int n) {
    int first = 0, second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[first]) {
            second = first;
            first = i;
        }
        else if (arr[i] < arr[first]) {
            if (second == -1 || arr[second] < arr[i])
                second = i;
        }
    }
    return second;
}
int secondsmallest(vector<int>arr, int n) {
    int first = 0, second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[first]) {
            second = first;
            first = i;
        }
        else if (arr[i] > arr[first]) {
            if (second == -1 || arr[second] > arr[i])
                second = i;
        }
    }
    return second;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
   int maxi = *max_element(a.begin(),a.end());
   int mini = *min_element(a.begin(),a.end());
    int second_smallest=INT_MAX,second_largest = INT_MIN;
    for(auto it:a){
        if(it < second_smallest && it > mini){
            second_smallest = it;
        }
        if(it > second_largest && it < maxi){
          second_largest = it;
        }
    }
    vector<int>ans;
    ans.push_back(second_largest);
    ans.push_back(second_smallest);
    return ans;
}
int main(){
vector<int>arr = {1,3,5,2,2,6,8};
for(auto it:arr){
    cout<<it<<" ";
}
cout<<endl;
// vector<int>ans = getSecondOrderElements(arr.size(),arr);
// for(auto it:ans){
//     cout<<it<<" ";
// }
int n = arr.size();
cout<<arr[secondLargest(arr,n)]<<" ";
cout<<arr[secondsmallest(arr,n)]<<endl;
return 0;
}