
#include<bits/stdc++.h>
using namespace std;

int slectionshort(int A[]){
    int n=A.size();
    int min=0;

for(int i=0;i<(n-1);i++){
    for(int j=i+1;j<n;j++){
        min=A[i];
        if(A[i]>A[j]){
            A[i]=A[j];
            A[j]=min;
        }
    }
}
return A[n];

}

int display(int A[]){
    int n=sizeof(A);
    for(int i=0;i<n;i++){
    cout<<A[i]<<" "<<endl;
}


}

int main(){

int n;
cout<<"write the no of num :"<<endl;
cin>>n;
int A[n];



for(int i=0;i<n;i++){
    cout<<"write the value of i at index "<<i<<":"<<endl;
    cin>>A[i];
}

 slectionshort(A);
 display(A);


    return 0;
}
