#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, newString;
    int i, length=0;
    cin >> s;
    length = s.length();
    for(i = 0; i < length ; i++){
        cout << s[i];
    }
    for(i = length-1; i >= 0 ; i--){
        cout << s[i];
    }
    cout << endl;
 
 
 
 
    return 0;
}