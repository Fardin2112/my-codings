#include<iostream>
#include<vector>
using namespace std; 
int display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>vec;
    int element,size;
    cout<<"enter size of vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter the valur of vector:"<<endl;
        cin>>element;
        vec.push_back(element);
    }
    vec.pop_back();
    display(vec);
    return 0;

}