#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int n, x, temp, total = 0, ans = 0;
    cin >> n >> x;
    for(int i = 0; i < n ; i++){
        cin >> temp;
        total += temp;
    }
    total = abs(total);
 
    if (total % x != 0){
        ans = (total / x)+1;
    }else{
        ans = total / x;
    }
 
    cout << ans << endl;
 
 
 
 
return 0;
}