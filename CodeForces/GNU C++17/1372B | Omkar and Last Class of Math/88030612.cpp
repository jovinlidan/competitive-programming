#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
        lli n, ans = 0;
        cin >> n;
 
        for(int i = 2; i <= sqrt(n)+1; i++)
        {
            if(n % i == 0)
            {
                ans = i;
                break;
            }
        }
        if(ans != 0)cout << n-(n/ans) << " " << (n/ans) << '\n';
        else cout << 1 << " " << n-1 << '\n';
 
 }
 
 
 
 
 
 
 
 
}
 