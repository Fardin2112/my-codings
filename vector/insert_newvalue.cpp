#include<iostream>
#include<vector>
using namespace std; 
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
    display(vec);
    vector<int>::iterator iter=vec.begin();
    vec.insert(iter+1,2,10);/*iter point where you want to add your new value(iter+2 locate at 3,iter+4 locate at 5)
                            after iter,2 used to print value 2 times ,if u want to add 1 time you can igonre it
                            third 10 value which we want to add*/
    display(vec);

    return 0;

}