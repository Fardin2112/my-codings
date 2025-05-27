#include<bits/stdc++.h>
using namespace std;

// Note -> nums is modified inside the function, but since you're returning vector<int>,
//          a new copy of nums is returned.
//         This means the caller gets a separate vector instead of using the original nums.


void RemoveElement(vector<int>& nums, int val) {  // No return, modifies original nums
    int k = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  
            k++;
        }
    }

    nums.resize(k);  // Trim extra elements
}

int RemoveElement2(vector<int>& nums, int val) {
    int k = 0;  // New index for valid elements
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  // Overwrite unwanted elements
            k++;
        }
    }

    return k;  // Return the new size
}


int main(){
    vector<int>nums{3,2,2,3};
   // vector<int>ans = RemoveElement(nums,3);
    int newSize = RemoveElement2(nums, 3);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }

    return 0;
}