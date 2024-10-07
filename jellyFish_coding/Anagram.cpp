#include<bits/stdc++.h>
using namespace std;

// using sort 
bool isAnagram1(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<" "<<t;
    if ( s != t){
        return false;
    }
    return true;
}

// using hash map
bool isAnagram2(string s, string t) {
    unordered_map<char,int>map;
    
    for(int i=0;i<s.size();i++){
        map[s[i]]++;
    }
        for(int i=0;i<t.size();i++){
        map[t[i]]--;
    }
    for (auto x : map){
        if (x.second != 0){
            return false;
        }
    }

    return true;
}
// using count
bool isAnagram3(string s, string t) {
    int count[26] = {0};

    for (char x : s){
        count[x - 'a']++;
    }
    for (char x : t){
        count[x - 'a']--;
    }
    for(auto x : count){
        if (x != 0){
            return false;
        }
    }

    return true;
}

int main() {
    string s = "car";
    string t = "arc";
    bool ans = isAnagram3(s,t);
    cout<<"is Anagram : "<<ans;
}