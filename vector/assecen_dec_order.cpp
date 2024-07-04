#include <bits/stdc++.h>
using namespace std;
int main() 
{
int val,i;
vector<int> array;
for(i=0; i<5; i++)
{
        cin>>val;
        array.push_back(val);
}

        sort(array.begin(), array.end());  
       //reverse(array.begin(),array.end()) ;//you can do with reverse in descending order but u have to use sort first
        for(int i=0;i<5;i++){
            cout<<array[i];
        }

        return 0;
}