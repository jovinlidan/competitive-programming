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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
   int tc;
   cin >> tc;
   while(tc--)
   {
       int n, sum = 0, xxx;
       cin >> n;
       vector<int> neg, pos;
       for(int i = 0;i < n; i++)
       {
           cin >> xxx;
           sum+= xxx;
           if(xxx >= 0)pos.push_back(xxx);
           else neg.push_back(xxx);
       }
       if(sum != 0)
       {
           cout << "YES\n";
           if(sum > 0)
           {
               int i = 0, j = 0, total = 0;
               sort(pos.rbegin(), pos.rend());
               sort(neg.rbegin(), neg.rend());
 
               while(i + j != n)
               {
                   if(total + pos[i] > 0 && i< pos.size())
                   {
                        total += pos[i];
                       cout << pos[i];
                       i++;
                   }
                   else if(j < neg.size())
                   {
                       total += neg[j];
                       cout << neg[j];
                       j++;
                   }
                   cout << " ";
 
               }
 
 
           }
           else
           {
                int i = 0, j = 0, total = 0;
               sort(pos.begin(), pos.end());
               sort(neg.begin(), neg.end());
 
               while(i + j != n)
               {
                   if(total + neg[j] < 0 && j < neg.size())
                   {
                        total += neg[j];
                       cout << neg[j];
                       j++;
                   }
                   else if(i < pos.size())
                   {
                       total += pos[i];
                       cout << pos[i];
                       i++;
                   }
                   cout << " ";
 
               }
           }
           cout << '\n';
       }
       else cout << "NO\n";
 
   }
 
 
 
    return 0;
}