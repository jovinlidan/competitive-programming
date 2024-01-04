#include <bits/stdc++.h>
using namespace std;
#define mxN 200005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
bool cmp (pair<int, int> l , pair<int, int> r)
{
    return l.second < r.second;
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
 
   int n, temp, temp2;
   cin >> n;
   vector<int>ans(1005);
   cout << "? " << 1 << " " << n << endl;
   cin >> temp;
   cout << "? " << 2 << " " << n << endl;
   cin >>temp2;
 
   ans[1] = temp - temp2;
   ans[n] = temp - ans[1];
   for(int i = 2; i < n; i++)
   {
       cout << "? " << i-1 << " " << i << endl;
       cin >> temp;
       ans[i] = temp - ans[i-1];
       ans[n] -= ans[i];
   }
   cout << "!";
   for(int i = 1; i <= n; i++)
   {
       cout << " ";
       cout << ans[i];
   }
   cout << endl;
 
 
 
    return 0;
}