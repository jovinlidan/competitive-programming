#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, total=0, hasil=0;
    cin >> n;
    string ans = "YES";
 
    for(int i = 1; i <= n; i++){
        total+=i;
        if(total == n){
            break;
        }
        else if(total > n){
            ans = "NO";
            break;
        }
    }
 
    cout << ans << endl;
 
 
return 0;
}