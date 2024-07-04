#include <bits/stdc++.h>

using namespace std;

int main(){
    int size,element;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
      cin>>array[i];
    }
    int max=0, highest=0;
    int min=0,lowest=0;
    for(int i=0;i<size;i++){
        highest=array[0];
        cout<<highest;
        if(highest<array[i]){
            highest=array[i];
            max++;
        }
        lowest=array[0];
         cout<<lowest;
        if(lowest>array[i]){
            lowest=array[i];
            min++;
        } 
          
    }
    cout<<size;
    cout<<max<<" "<<min;
    return 0;
}