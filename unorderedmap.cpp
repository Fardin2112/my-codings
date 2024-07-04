#include<bits/stdc++.h>
using namespace std;

//counting of similar value
int getcountofuniquestring(vector<string>A){
    unordered_map<string,int> umap;

      for(int i=0;i<A.size();i++){
          umap[A[i]]++;
      }
      
        unordered_map<string,int> ::iterator p;
        int count=0;
      for( p=umap.begin();  p!= umap.end(); p++){
        if(p->second==1){
            count++;
        }
      }
      return count;
}
// counting of similar value
int getcountofnonuniquestring(vector<string>A){
    unordered_map<string,int> umap;

      for(int i=0;i<A.size();i++){
          umap[A[i]]++;
      }
      
        unordered_map<string,int> ::iterator p;
        int count=0;
      for( p=umap.begin();  p!= umap.end(); p++){
        if(p->second > 1){
            count++;
        }
      }
      return count;
}

void elements(vector<string>A){
    unordered_map<string,int> umap;

      for(int i=0;i<A.size();i++){
          umap[A[i]]++;
      }
      
        unordered_map<string,int> ::iterator p;
        
      for( p=umap.begin();  p!= umap.end(); p++){ 
        cout<<"("<<p->first<<","<<p->second<<")\n";
      }
      
}


int main (){

   vector<string>A={"akhiles","siorhi","fardin","a","a","b"};
   elements(A);
   int n = getcountofuniquestring(A); 
   int m = getcountofnonuniquestring(A); 
 
   cout<<"unique value->"<<n<<endl;
   cout<<"similar value>"<<m<<endl;
    return 0;
}