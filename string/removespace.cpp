#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;


int main() {
   string my_str = "This is C++ Programming Language";
   cout << "String with Spaces :" << my_str << endl;
   remove(my_str.begin(), my_str.end(), ' ');
   cout << "String without Spaces :" << my_str;

   return 0;
}