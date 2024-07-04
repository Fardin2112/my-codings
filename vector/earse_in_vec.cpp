#include<iostream>
#include<vector>
using namespace std;
int main(){

    int size,element;
    cin>>size;
    vector<int>vec;
    for(int i=0;i<size;i++){
        cin>>element;
        vec.push_back(element);
    }
    int del;
    cin>>del;
    // vec.erase(vec.begin()+(del-1));//vec.begin is starting point after that i used add sign so which element you want to delete just write but less than 1 .
    vec.erase(vec.begin()+(del-1),vec.end()-1);// i used end fuction so from desired lenght to desired last length you can delete values.
    
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i];
    }
    
    return 0;
}