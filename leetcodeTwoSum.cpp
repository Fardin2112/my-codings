#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int j=0; j<nums.size(); j++){
            //  ye key avilaible hai key nahi search kar rha hai
            if(mp.count(nums[j])){
                return {j,mp[nums[j]]};
            }
            else{ 
                // aur yha value insert ho rha hai map mai
                mp[target - nums[j]]=j;
            }
        }
        return {-1,-1};
    }
int main(){
    vector<int> nums = {2,8,12,7};
    int target=9;
    vector<int>ans=twoSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;



    return 0;
}