#include <bits/stdc++.h>
#define lli long long int
#define mxN 10005
using namespace std;
typedef pair<lli,int> pii;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
 
    int n, temp, zero = 0;
    cin >> n;
    int arr[n+5] = {};
    vector<int> neg, pos;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >>temp;
        if(arr[i] - temp > 0)pos.push_back(arr[i]-temp);
        else if(arr[i]-temp == 0)zero++;
        else
        {
            neg.push_back(abs(arr[i] - temp));
        }
    }
    sort(neg.begin(), neg.end());
   // cout << pos.size() << " " << zero << " " << neg.size() << '\n';
    lli ans = 0, length = pos.size();
    for(int i = 0; i < length; i++)
    {
        int px = pos[i];
        ans+= (zero + (length-(i+1)));
        auto low = lower_bound(neg.begin(), neg.end(), px);
     //   cout << (px) << "-" << (low-neg.begin()) << "\n";
        ans += (low - neg.begin());
      //  cout << ans << "ans\n";
    }
    cout << ans << '\n';
 
 
 
}