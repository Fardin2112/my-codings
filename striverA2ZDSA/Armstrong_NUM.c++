#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    // solution 1
          if ( n <= 1){
            return 1;
        }
        int i = 0;
        int jump = 0;
        int count = 0;
        while ( i <= n){
            if ( arr[i] == 0){
                return -1;
            }
            else if (arr[i] != 0 && arr[i]+i < n) {
                i = i + arr[i] ;
                count++;
            }
            else if (arr[i] != 0 && arr[i]+i >= n){
                i=n;
                count++;
                break;
            }
            //cout<<i<<jump<<count<<endl;
        }
        return count++;

        // solution 2
                // Your code here
        if (arr[0] >= n){
            return 1;
        }
        long long i = 0;
        double jump = 0;
        int count = 0;
        while ( i <= n){
            if ( arr[i] == 0){
                return -1;
            }
            i = i + jump ;
            jump = arr[i] ;
            if (i >= n){
                return count;
            };
            count++;
            //cout<<i<<jump<<count<<endl;
        }
        return -1;
    return 0;
}