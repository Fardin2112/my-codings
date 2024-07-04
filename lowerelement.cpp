#include <bits/stdc++.h>
using namespace std;
//#define int long long;

int closeToLeft(vector<int>A,int target){
    int first=0,last=(A.size()-1);
    

    while(first<=last){
        long mid=first+(last-first)/2;
        if(A[mid]<target){
            return 
        }
        else if(A[mid]>target){
            last=mid-1;
        }
    }
	return 0;
}


signed main() {
	int n,k;
	cin>>n>>k;
	vector<int>A(n);
	for(int i=0;i<n;i++){
		cin>>A[i]; 
	}

    int a;

    while(k--){
        cin>>a;
        cout<<closeToLeft(A,a)<<endl;
    } 
	
	
	return 0;
}