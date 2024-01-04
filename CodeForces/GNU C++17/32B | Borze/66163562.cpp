#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    string code, ans;
    cin >> code;
    code += '0';
 
    for(int i =0; i < code.length(); i++)
    {
        if(code[i] != '0')
        {
            if(code[i] == '.')
            {
                ans += '0';
                code[i] = NULL;
            }
            else if (code[i] == '-' && code[i+1] == '.')
            {
                ans += '1';
                code[i] = NULL;
                code[i+1] = NULL;
 
            }
            else if (code[i] == '-' && code[i+1] == '-')
            {
                ans += '2';
                code[i] = NULL;
                code[i+1] = NULL;
 
            }
        }
 
 
    }
    cout << ans << endl;
 
 
 
 
 
        return 0;
    }