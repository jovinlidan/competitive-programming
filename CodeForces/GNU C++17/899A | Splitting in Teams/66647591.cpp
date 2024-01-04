#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int x,n, i,cnt[5] = {}, total=0, mn=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        cnt[x]++;
 
    }
 
    if(cnt[1] > (3 * cnt[2])){
        mn = min(cnt[1], cnt[2]);
        cnt[1] -= mn;
        cnt[2] -= mn;
        total += mn;
        total += (cnt[1] / 3);
        cnt[1] = cnt[1] % 3;
    }else{
        mn = min(cnt[1], cnt[2]);
        total += mn;
        cnt[1] -= mn;
        total += cnt[1] / 3;
    }
    cout << total << endl;
 
 
 
    return 0;
}