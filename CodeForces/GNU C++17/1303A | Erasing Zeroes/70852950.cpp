#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >>s ;
        int left = -1, right = -1, length = s.length();
        for(int i = 0; i < length; i++)
        {
            if(s[i] == '1')
            {
                left = i;
                break;
            }
        }
        for(int i = length-1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                right = i;
                break;
            }
        }
        int ans = 0;
        while(left < right)
        {
            if(s[left] == '0')
            {
                ans++;
            }
            left++;
        }
        cout << ans << endl;
 
    }
 
 
 
 
 
 
 
 
    return 0;
}