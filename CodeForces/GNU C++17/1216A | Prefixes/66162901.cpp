#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    long long int n ,mid=0, i, qq=0, ans=0;
    string s;
    cin >> n >> s;
 
    for(int i = 0; i < n; i+=2)
    {
        if(s[i] == 'a' && s[i+1] == 'a'){
            s[i] = 'b';
            ans++;
        }
        else if(s[i] == 'b' && s[i+1] == 'b'){
            s[i] = 'a';
            ans++;
        }
 
    }
    cout << ans <<endl;
    cout << s;
 
 
 
 
 
    return 0;
}