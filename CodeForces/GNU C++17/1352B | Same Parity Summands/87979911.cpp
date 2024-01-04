#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, x;
        cin >> n >> x;
        if(((x-1)*2 < n) && ( ((n- ((x-1)*2)) % 2) == 0) )
        {
            cout << "YES\n";
            for(int i = 0; i < x-1; i++)
            {
                cout << 2 << " ";
            }
            cout << n- ((x-1)*2) << '\n';
        }
        else if(((x-1) < n) && ( ((n- (x-1)) % 2) == 1) )
        {
            cout << "YES\n";
            for(int i = 0; i < x-1; i++)
            {
                cout << 1 << " ";
            }
            cout << n-(x-1) << '\n';
        }
        else cout << "NO\n";
 
 
    }
 
 
 
 
    return 0;
}