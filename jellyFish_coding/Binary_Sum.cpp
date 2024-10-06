#include<bits/stdc++.h>
using namespace std;

void Print(string nums){
    for(int i=0;i<nums.length();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
};

string binarySum (string A,string B) {
    // if a length is greater than b then we call funtion again but swap value;
    if (A.length() > B.length()) return binarySum(B,A);
    
    int diff = B.length() - A.length();

    // we initialise a new string which will have length of diff btw these two length or give value of all 0
    string padding;
    for (int i=0; i<diff; i++){
        padding.push_back('0');
    }

    // Now A have same of as b
    A = padding + A;

    string result;
    char carry = 0;

    for (int i = A.length() - 1; i >= 0; i--) {
        
        if (A[i] == '1' && B[i] == '1') {
            if (carry == '1'){
                result.push_back('1');
                carry = '1';
            } else {
                result.push_back('0');
                carry = '1';
            }
        }
        else if (A[i] == '0' && B[i] == '0'){
            if (carry == '1'){
                result.push_back('1');
                carry = '0';
            } else {
                result.push_back('0');
                carry = '0';
            }
        }
        else if ( A[i] != B[i]) {
            if (carry == '1'){
                result.push_back('0');
                carry = '1';
            } else {
                result.push_back('1');
                carry = '0';
            }
            
        }
    }
    if (carry == '1') {
            result.push_back('1');
    }
    reverse(result.begin(),result.end());

   // if you want no zero in prefix then use this 
    // int index = 0;
    // while (index + 1 < result.length() && result[index] == '0')
    //     index++;
    // return (result.substr(index));
    return result;
}

int main(){
    string a;
    string b;
    int n;
    int m;
    cout<<"Enter the length of A :"<<endl;
    cin>>n;
    cout<<"Enter the length of B :"<<endl;
    cin>>m;
    cout<<"Enter the value of A :"<<endl;
    for(int i=0;i<n;i++){
        char element;
        cin>>element;
        a = a + element;
    }
    cout<<"Enter the value of B :"<<endl;
     for(int i=0;i<m;i++){
        char element;
        cin>>element;
        b  += element;
    }
    cout<<"Value of A is : ";
    Print(a);
    cout<<" \n Value of B is :"<<endl;
    Print(b);
    string ans  = binarySum(a,b);
    cout<<"Binary Sum of A and B is :"<<ans<<endl;
    return 0;
}