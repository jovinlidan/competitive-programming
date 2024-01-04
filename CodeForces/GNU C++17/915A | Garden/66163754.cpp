#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, k, a, mx=-1e9;
    cin >> n >> k;
    for(int i = 0; i < n ; i++){
        cin >> a;
        if(k % a == 0){
            mx = max(mx, a);
        }
    }
    cout << k / mx << endl;
 
 
 
 
 
return 0;
 
}