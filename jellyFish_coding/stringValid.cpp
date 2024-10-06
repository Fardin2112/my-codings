#include <bits/stdc++.h>
using namespace std;

   bool isValid(string s) {
        int n = s.length();
        stack<char>str;

        for (int i = 0; i < n; i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                str.push(s[i]);
            } else {
                if (!str.empty() && (
                    (s[i] == ')' && str.top() == '(')
                    || (s[i] == '}' && str.top() == '{')
                    || (s[i] == ']' && str.top() == '[')  
                    )      
                ) { 
                    str.pop();
                }
                 else {
                    return false;
                }
            }    
        }
        return str.empty() ? "true" : "false";
    }

int main () {
    string s = "{()}";
    bool ans = isValid(s);
    cout<<"ans is : "<<ans;

    return 0;
}
