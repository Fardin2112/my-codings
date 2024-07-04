#include<iostream>
using namespace std;
int main (){
    int arr1[4]={1,2,3,4};
    int arr2[2]={1,2};
    for(int i=0;i<sizeof(arr2);i++){
            if(arr1[i]==arr2[i]){
                cout<<"yes"<<endl;
            }
             else if(arr1[i]!=arr2[i]){
                    cout<<"no"<<endl;
                    break;
                }
    }
    return 0;
}