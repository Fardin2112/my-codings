#include<iostream>
using namespace std;

void sort(int A[],int n)
{
    int k=A[0];
	for(int i=0;i<n;i++){
       k=max(k,A[i]);
	}
	

	int count[10]={0};
	for(int i=0;i<n;i++){
       count[A[i]]++;
	}
	

	for(int i=1;i<=k;i++){
		count[i]+=count[i-1];
	}
	

	int output[n];
	for(int i=n-1;i<0;i--){
        output[--count[A[i]]]=A[i];
	}
	
 
	for(int i=0;i<n;i++){
		A[i]=output[i];
	}
}

int main(){

int A[]={2,4,5,6,2,4,6,8,8};
int n=9;
sort(A,n);
for(int i=0;i<9;i++){
    cout<<A[i]<<" ";
}

    return 0;
}