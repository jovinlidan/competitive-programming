#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
 
        int a[n+5] = {}, p[m+5] = {};
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for(int i = 1; i <=m; i++)
        {
            cin >> p[i];
        }
        bool loop = true;
        while(loop)
        {
            loop = false;
            for(int i = 1; i <= m; i++)
            {
                int temp = p[i];
                if(a[temp] > a[temp+1])
                {
                    swap(a[temp], a[temp+1]);
                    loop = true;
                }
            }
        }
        if(is_sorted(a+1, a+n+1)) cout <<"YES\n";
        else cout << "NO\n";
 
    }
 
 
 
 
 
 
 
 
    return 0;
}