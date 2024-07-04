#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}

int getlenght(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
       count++;
    }
    return count;
}

int main(){
char name[20];
cout<<"Enter your name ";
cin>>name;
cout<<"YOur name is "<<name<<endl;

int len=getlenght(name);
cout<<"Lenght :"<<len<<endl;

reverse(name,len);

cout<<"Yorn name reverse is:"<<name<<endl;




    return 0;
}