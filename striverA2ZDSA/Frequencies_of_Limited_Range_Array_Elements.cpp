// Given an array arr[] of n positive integers which can contain integers from 1 to p where elements can be repeated or can be absent from the array.
// Your task is to count the frequency of all numbers from 1 to n. Do modify the array in-place changes in arr[], such that arr[i] = frequency(i) and assume 1-based indexing.

// Note: The elements greater than n in the array can be ignored for counting. 

// Examples
// Input: n = 4  arr[] = {3,3,3,3} p = 3
// Output: 0 0 4 0
// Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 0 times. 3 occurring 4 times. 4 occurring 0 times.
// Input: n = 2 arr[] = {8,9} p = 9
// Output: 0 0
// Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 0 times. Since here P=9, but there are no 9th Index present so can't count the value.
#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,int>map;
    int n;
    cout<<"print number of size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"element of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        map[arr[i]]++;
    }
    for(int i=0; i<n;i++){
        arr[i] = map[i+1];
        cout<<arr[i]<<" ";
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}