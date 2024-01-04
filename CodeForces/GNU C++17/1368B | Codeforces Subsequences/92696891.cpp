#include <bits/stdc++.h>
#define lli long long int
 
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    char arr[] = {'c', 'o', 'd', 'e', 'f', 'O', 'r', 'C', 'E', 's'};
    unordered_map<char, lli> mp;
    for(int i = 0; i < 10; i++)mp[arr[i]]++;
 
    lli k, cnt = 1, layer = 2;
    cin >> k;
    while(cnt < k)
    {
        for(int i = 0; i < 10; i++)
        {
            cnt /= mp[arr[i]];
            mp[arr[i]]++;
            cnt *= mp[arr[i]];
            if(cnt >= k)break;
        }
    }
 
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < mp[arr[i]]; j++)
        {
            if(arr[i] == 'C')cout << 'c';
            else if(arr[i] == 'E')cout << 'e';
            else if(arr[i] == 'O')cout << 'o';
            else cout << arr[i];
        }
    }
    cout << '\n';
    //cout << cnt << '\n';
 
 
}