#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b;
        cin >> a >> b;
        if((a-b) % 2 == 1 && a > b)cout << 2 << '\n';
        else if((a-b) % 2 == 0 && a < b) cout << 2 << '\n';
        else if(a == b)cout << 0 << '\n';
        else cout << 1 << '\n';
    }
    return 0;
}