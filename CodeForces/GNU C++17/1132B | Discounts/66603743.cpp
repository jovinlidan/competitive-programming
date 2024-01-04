#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector <int> data;
    long long int n, i, m, temp, mCpn, total=0;
    cin >> n;
 
    for(i = 0; i < n; i++){
        cin >> temp;
        data.push_back(temp);
        total += temp;
    }
    sort(data.begin(), data.end(), greater <int>());
    cin >> m;
 
    for(i = 0; i < m; i++){
        cin >> mCpn;
        cout << total - data[mCpn-1] << endl;
    }
 
 
 
 
 
 
 
    return 0;
}