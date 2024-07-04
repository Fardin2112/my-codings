#include<iostream>
using namespace std;
int main(){
   
    int b;
    cout<<"write b:"<<endl;
    cin>>b;
    int result=0;
    int array[b];
    
    
    for(int i=0;i<b;i++){
        cout<<"write value of b:";
        cin>>array[i];
    }
    
     int c;
     cout<<"write the value of c"<<endl;
    cin>>c;
    int arr2[c];
    for(int i=0;i<c;i++){
        cout<<"write the num in c:";
        cin>>arr2[i];
    }
   
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            if(array[i]==arr2[j]){
                result++;
            }
        }
    }
    cout<<"final result"<<result;
    return 0;
}