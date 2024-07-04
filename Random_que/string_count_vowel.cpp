#include<iostream>
using namespace std;


int main(){
    int vowel=0;
  char str[]="pARASITEeiou";
  for(int i=0;i<sizeof(str);i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='U'||str[i]=='E'||str[i]=='I'||str[i]=='O'){
        vowel++;
    }
  }
  cout<<vowel;
    return 0;
}