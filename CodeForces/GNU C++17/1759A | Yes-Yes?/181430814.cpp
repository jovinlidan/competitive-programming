#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    string s;
    string str = "Yes";
    int startIdx = 0;
 
    cin >> n ;
    while(n--){
        cin >> s;
 
        if(s[0]== 'Y')startIdx = 0;
        else if(s[0] == 'e')startIdx = 1;
        else if(s[0] == 's')startIdx = 2;
        else {
            cout << "NO\n";
            continue;
        }
        string ans = "YES";
        for(int i = 0 ;i < s.length(); i++){
            if(s[i] != str[startIdx]){
                ans =  "NO";
                break;
            }
            startIdx++;
            startIdx%=3;
        }
        cout << ans << '\n';
    }
 
        
 
    
 
 
    return 0;
}
 