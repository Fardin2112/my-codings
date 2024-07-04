#include<bits/stdc++.h>
using namespace std;

/*take input and return index of element if element not present in array return previous digit*/

void Index(int arr[],int target){

}
int main(){
    int n;
    cout<<"size of array";
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
       cout<<"write the value index "<< i<<endl;
       cin>>arr[i];
    }
    int Target;
    cout<<"Target to find in array :"<<endl;
    cin>>Target;
    
    int Ans;
    Index(arr,Target);
    

    cout<<"index of target is : "<< Ans <<endl;


    return 0;
}