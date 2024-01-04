#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nBaloons, nFriends, i, j, mid = 0, mx = -1e9;
    string color;
    map <char, int> counts;
    cin >> nBaloons >> nFriends;
 
    if(nBaloons % nFriends == 0)
    {
        mid = nBaloons / nFriends;
    }
    else
    {
        mid = (nBaloons / nFriends) + 1;
    }
 
    cin >> color ;
    for(i = 0; i < nBaloons ; i++)
    {
        counts[color[i]]++;
        mx = max(mx, counts[color[i]]);
    }
    if (mx > nFriends)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
 
 
 
 
    return 0;
}