#include<bits/stdc++.h>
using namespace std;

vector<int>RemoveElement(vector<int>nums ,int val){
    int k = 0;
    int n = nums.size();
    for (int i=0;i<n;i++){
        if (nums[i] == val) {
            continue;
        }
        nums[k] = nums[i];
        k++;
    }
    return nums;
}



int main(){
    vector<int>nums{3,2,2,3};
    vector<int>ans = RemoveElement(nums,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

    return 0;
}