#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{ ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
    int tc , n, arr[200005]={};
    cin >> tc;
 
    while(tc--){
        bool isYes= false;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
 
        for(int i = 1; i <= n-1; i++){
            if(abs(arr[i] - arr[i+1]) >= 2){
    cout << "YES\n";
    isYes = true;
    cout << i << " " << i+1 << endl;
    break;
            }
        }
        if(!isYes) cout << "NO\n";
    }
 
 
 
 
    return 0;
 
}