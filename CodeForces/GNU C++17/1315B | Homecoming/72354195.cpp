#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b, p;
        cin >> a >> b >> p;
        string s;
        cin >> s;
 
        char lastChar = '0';
        int length = s.length(), total = 0, idx= 0;
        if(s[length-1] != s[length-2])
        {
            s[length-1] = s[length-2];
        }
        for(int i = length - 1; i >= 0; i--)
        {
            if(s[i] != lastChar )
            {
                if(s[i] == 'A')
                {
                    total += a;
                }
                else
                {
                    total += b;
                }
                if(total > p)
                {
//                    if(i == 0)
//                    {
//                        idx = i;
//                        break;
//                    }
//                    else
//                    {
                        idx = min(i+1, length-1);
                        break;
                    //}
                }
            }
 
            lastChar = s[i];
        }
        cout << idx+1 << endl;
 
    }
 
 
 
 
    return 0;
}