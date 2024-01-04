#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int i, n, mx=-1e9;
    char clr[100005]={};
    map  <char, long long  int> counts;
 
    cin >> n;
 
    for(i = 0; i < n; i++){
        cin >> clr[i];
        counts[clr[i]]++;
        mx = max(mx,  counts[clr[i]]);
    }
    if(mx > 1 || n == 1) cout << "YES\n";
    else cout << "NO\n";
 
 
}