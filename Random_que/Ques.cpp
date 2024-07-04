// you have 15 ruppes
//you can use 1 rs for 1 toffe
//3 wrapper of toffe you can use for buy another 1 toofe
// how much tofffe you can buy?
#include<iostream>
using namespace std;
int main(){
    int money=15;
    int toffe=money;
    int recyle_toffe=toffe/3;
   int re_recyle_toffe=recyle_toffe/3;
    toffe=toffe+recyle_toffe+re_recyle_toffe+2;
cout<<"you have "<<toffe<<" toffe";



    return 0;
}
