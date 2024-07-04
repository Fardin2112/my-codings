#include <iostream>
#include<climits>
using namespace std;

int main() {
int n;
cout<<"write n"<<endl;
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cout<<"write Array value :"<<endl;
	cin>>A[i];
}
int maxno=INT_MIN;
int minno=INT_MAX;
for(int i=0;i<n;i++){
	maxno=max(maxno,A[i]);
	minno=min(minno,A[i]);
}
cout<<"max no:"<<maxno<<" "<<"min no: "<<minno;
	return 0;
}