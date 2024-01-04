#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
int main()
{
    string s;
    cin >> s;
    set<char> sets;
    unordered_map<char, int> cnt;
 
    for(int i = 0; i< s.length(); i++)
    {
        sets.insert(s[i]);
        cnt[s[i]]++;
    }
    int ans = 0;
    for(auto i : sets)
    {
        if(cnt[i] & 1) ans++;
    }
    if(ans&1 || ans == 0)cout << "First\n";
    else cout << "Second\n";
 
    return 0;
}