#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n , i, j, s1[1005]= {}, s2[1005] = {}, total1=0,total2=0;
    bool isYes = true;
 
    cin >> n;
    for(i = 0; i < n ; i++){
        cin >> s1[i];
        total1+=s1[i];
    }
    for(i = 0; i < n ; i++){
        cin >> s2[i];
        total2 += s2[i];
    }
 
//    for(i = 0; i < n; i++){
//        if(s1[i] - s2[i] < 0)
//            isYes = false;
//    }
//    cout << total1 << "INI TOTAL 1\n";
//    cout << total2 << "INI TOTAL 2\n";
//    if(isYes) cout << "YES\n";
//    else cout << "NO\n";
 
    if(total1 >= total2) cout << "YES\n";
    else cout << "NO\n";
 
 
 
 
 
 
 
return 0;
}