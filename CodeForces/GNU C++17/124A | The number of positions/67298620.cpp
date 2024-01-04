#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a, b, cnt=0;
    cin >> n >> a >> b;
 
    int ans = n - max(a+1, n-b);
    cout << ans + 1;
 
 
 
    return 0;
}