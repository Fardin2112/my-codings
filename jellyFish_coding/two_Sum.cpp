#include<bits/stdc++.h>
using namespace std;

void Print(vector<int>& nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
};

vector<int>two_Sum(vector<int>& nums, int n, int target){
    unordered_map<int,int>map;
    
    for(int i = 0; i < n; i++){
        if (map.count(nums[i])) {
            return {map[nums[i]],i};
        } else {
            map[target - nums[i]]=i;
        }
    }
    return {-1,-1};
}



int main() {
    vector<int>nums;
    int target;
    cout<<"Enter the size of array : ";
    int n;
    cin>>n;
    cout<<"size of Array : "<<n<<endl;
    cout<<"Now gives the element value"<<endl;
    for (int i=0;i<n;i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }
    Print(nums,n);
    cout<<"Give the value of Target of two Sum :";
    cin>>target;
    vector<int>ans = two_Sum(nums,n,target);
    cout<<'\n'<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}
