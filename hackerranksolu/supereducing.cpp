#include<bits/stdc++.h>
using namespace std;

void superReducedString(string s) {
     
     
    const int length = s.length();
 
    
    char* char_array = new char[length + 1];
 
   
    strcpy(char_array, s.c_str());
    
   
    
     unordered_map<char,int>map;
     int n=s.size();
     for(int i=0;i<n;i++){
         map[s[i]]++;
     }
     
     vector<char>A;
      unordered_map<char,int>::iterator p;
     for(p=map.begin();p!=map.end();p++ ){
         A.push_back(p->first);
         }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
     
    //  vector<string>vec;
    //    unordered_map<char,int>::iterator p;
    //  for(p=map.begin();p!=map.end();p++ ){
    //       char=p->first;  
    
    //  }
    
    //  char A[length+1];
    //  unordered_map<char,int>::iterator p;
    //  for(p=map.begin();p!=map.end();p++ ){
    //      if(p->second>=1){
    //          cin>>A[p->first];
    //      }
    
    //  }
    // for(int i=0;i<A[length+1];i++){
    //     cout<<A[i]<<" ";
    // }
     
}

int main(){
    string s="aaabbc";
    superReducedString( s);

    return 0;
}