#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main (){
    //creation
    unordered_map<string,int>umap;

    //intilization
    //1
    pair<string,int>p=make_pair("fardin",21);
    umap.insert(p);

    //2
     pair<string,int>pair2("chiku",12);
     umap.insert(pair2);
     //3
     umap["Name"]=1;

    // what will happen
     //4
     umap["Name"]=2;

    //search
    cout<<umap["Name"]<<endl;

    cout<<umap.at("fardin")<<endl;;

    //size

    cout<<"size of map->"<<umap.size()<<endl;

     
   for(auto i:umap){
    cout<<i.first<<"="<<i.second<<endl;
   }


   //count fun used to check wheter number presenet in map or not if 1 yes for 0 No.
   cout<<umap.count("fardin")<<endl;
   cout<<umap.count("yes")<<endl;

   // erase fun used in map to delete any data from map
   umap.erase("Name");
   cout<<"size of map->"<<umap.size()<<endl;

   //iterator
    unordered_map<string,int>::iterator P=umap.begin();

    while(P!=umap.end()){
     cout<<P->first<<"::"<<P->second<<endl;
     P++;
    }
    return 0;
}
