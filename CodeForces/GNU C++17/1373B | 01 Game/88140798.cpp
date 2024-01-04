#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
 
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        stack<char> arr;
        int ans = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(arr.empty())
            {
                arr.push(s[i]);
                continue;
            }
            else
            {
                if(s[i] != arr.top())
                {
                    arr.pop();
                    ans++;
                }
                else
                {
                    arr.push(s[i]);
                }
            }
        }
        if(ans%2 == 0)cout << "NET\n";
        else cout << "DA\n";
 
 
    }
 
    return 0;
}