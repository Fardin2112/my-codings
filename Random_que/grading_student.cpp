#include <iostream>
using namespace std;

int main() {
	int n,num[n];
	cin>>n;
	for(int a=0;a<n;a++){
		cin>>num[a];
	}
for(int a=0;a<n;a++){
            while(num[a]%5!=0){
            num[a]++;
            cout<<num[a];
            }
    }
   for(int i=0;i<n;i++){
    cout<<num[i];
   }

	return 0;
}