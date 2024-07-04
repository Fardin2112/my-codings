#include<bits/stdc++.h>
using namespace std;
//not working
int mai ()
{
  string s=" Fardin Alam";
  int length = s.size();

  for (int i = 0; i < length; i++) {
     if(s[i] == ' ')
        s.erase(i, 1);
       length--;
       i--;
  }

  cout<<"after removing space ->"<<s<<endl;
  return 0;
}