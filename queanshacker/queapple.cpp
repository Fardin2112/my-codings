#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,t,a,b,n,m,element1,element2;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    vector<int>apples;
    for(int i=0;i<m;i++){
        cin>>element1;
        apples.push_back(element1);
    }
      int one_int=0,sec_int=0;
    vector<int>oranges;
    for(int i=0;i<n;i++){
        cin>>element2;
        oranges.push_back(element2);
    }
     vector<int>first;
    for(int i=0;i<m;i++){
        first[i]=apples[i]+s;
        cout<<first[i];
        if(s<=first[i]&& first[i]<=t){
             one_int++;
         }
    }
    vector<int>sec;
     for(int i=0;i<n;i++){
         sec[i]=oranges[i]+t;
         cout<<sec[i];
         if(s<=sec[i]&&sec[i]<=t){
             sec_int++;
         }    
     }
         cout<<one_int<<endl;
         cout<<sec_int<<endl;
  return 0;
}
