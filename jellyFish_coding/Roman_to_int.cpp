#include <bits/stdc++.h>
using namespace std;

void Print(string nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
};

int romanToInt(string s)
{
    int n = s.length();
    unordered_map<char, int> map{
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int result = 0;
    int prevValue = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int currentValue = map[s[i]];
        ;
        if (currentValue < prevValue)
        {
            result -= currentValue;
        }
        else
        {
            result += currentValue;
        }
        prevValue = currentValue;
    }
    return result;
}

int main()
{    
    string s;
    int n;
    cout<<"Enter the lenght of string :";
    cin>>n;
    cout<<"Enter the Value in captial Roman Number :"<<endl;
    for(int i=0;i<n;i++){
        char element;
        cin>>element;
        s += element;
    }
    Print(s,n);
    int ans = romanToInt(s);
    cout<<"Roman to Integer Value is :"<<ans<<endl;


    return 0;
}