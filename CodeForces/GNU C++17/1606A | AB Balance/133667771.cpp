#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
        string s;
    cin >> tc;
    int ab = 0;
    int ba = 0;
    while(tc--)
    {
        cin >> s;
        ab = 0;
        ba = 0;
        for(int i = 0; i < s.length()-1; i++)
        {
            if(s[i] == 'a' && s[i+1] == 'b')
            {
                ab++;
            }
            else if(s[i] == 'b' && s[i+1] == 'a')
            {
                ba++;
            }
        }
        if(ab > ba)
        {
            for(int i = 0; i < s.length()-1; i++)
            {
                if(s[i] == 'a' && s[i+1] == 'b')
                {
                    s[i] = 'b';
                    break;
                }
                else if(s[i] == 'a' && s[i+1] == 'a')
                {
                    s[i] = 'b';
                    break;
                }
            }
        }
        else if(ba > ab)
        {
            for(int i = 0; i < s.length()-1; i++)
            {
                if(s[i] == 'b' && s[i+1] == 'a')
                {
                    s[i] = 'a';
                    break;
                }
                else if(s[i] == 'b' && s[i+1] == 'b')
                {
                    s[i] = 'a';
                    break;
                }
            }
        }
        cout << s << '\n';
    }
}