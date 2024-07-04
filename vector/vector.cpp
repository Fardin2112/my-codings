#include<iostream>
#include<vector>

using namespace std;
void display(vector<int>&v){
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
  

}

  
int main(){
    vector<int>vec;
    int element,size;
    cout<<"enter the size of vector:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"value of vector"<<endl;
        cin>>element;
        vec.push_back(element);
    }
    display(vec);
    return 0;
}