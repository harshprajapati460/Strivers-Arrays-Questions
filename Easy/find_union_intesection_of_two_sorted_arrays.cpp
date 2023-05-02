#include<bits/stdc++.h>
using namespace std;

void next_distinct(const vector<int> &arr, int &x) // Moving to next distinct element
{
 
    do
    {
        ++x;
    } while (x < arr.size() && arr[x - 1] == arr[x]);
}
 
vector < int > sortedArray(vector < int > arr1, vector < int > arr2) {
    // Write your code here
    vector<int>ans;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            next_distinct(arr1, i); // Incrementing i to next distinct element
        }
        else if (arr1[i] > arr2[j])
        {
            ans.push_back(arr2[j]);
            next_distinct(arr2, j); // Incrementing j to next distinct element
        }
        else
        {
            ans.push_back(arr1[i]);
            // OR cout << arr2[j] << " ";
            next_distinct(arr1, i); // Incrementing i to next distinct element
            next_distinct(arr2, j); // Incrementing j to next distinct element
        }
    }
    // Remaining elements of the larger array
    while (i < arr1.size())
    {
        ans.push_back(arr1[i]);
        next_distinct(arr1, i); // Incrementing i to next distinct element
    }
    while (j < arr2.size())
    {
        ans.push_back(arr2[j]);
        next_distinct(arr2, j); // Incrementing j to next distinct element
    }
    return ans;
}

int main(){

 vector<int>a = {1,3,4,5,6};
 vector<int>b = {3,4,5,7,8};
 for(auto it:a){
    cout<<it<<" ";
 }
 cout<<endl;
 for(auto it:b){
    cout<<it<<" ";
 }
 cout<<endl;
 vector<int>ans = sortedArray(a,b);
 for(auto it:ans){
    cout<<it<<" ";
 }
return 0;
}