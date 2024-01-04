#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    string s;
    cin >> tc;
    int idx = 0;
    char c;
    while(tc--)
    {
        idx = 0;
        cin >> s;
        c = s[0];
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] < c)
            {
                c = s[i];
                idx = i;
            }
 
        }
 
        cout << s[idx] << ' ';
 
        for(int i = 0; i < s.length(); i++)
        {
            if(i == idx)continue;
            cout << s[i];
        }
        cout << '\n';
        
    }
}