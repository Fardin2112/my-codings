#include<iostream>
using namespace std;


#include <iostream>
using namespace std;
int main(){
   // initializing all the variables with Dividend = 9, Divisor = 2.
   int Q = 8,q=1,M=3;
   short N = 4;
   int A = Q;
   M <<= N;
   // loop for division by bit operation.
   for(int i=N-1; i>=0; i--) {
      A = (A << 1)- M;
      // checking MSB of A.
      if(A < 0) {
         q &= ~(1 << i);  // set i-th bit to 0
         A = A + M;
      } else {
         q |= 1 << i;     // set i-th bit to 1
      }
   }
   cout << "Quotient: "<< q;
   return 0;
}


// int main (){
//     int Q;   //Dividenend
//     cout<<"enter the the value of dividend in binary :"<<endl;
//     cin>>Q;

//     int A=0;

//     int M; //divisor
//     cout<<"enter the the value of divisor in binary :"<<endl;
    
//     int n ;//number of bits in dividend
//     n=
    
//     return 0;
// }