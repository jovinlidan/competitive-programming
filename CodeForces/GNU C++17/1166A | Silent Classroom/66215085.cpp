#include <bits/stdc++.h>
 
 
 
int permutation(int x){
    int ans = 0;
    for (int i = 1; i < x; i++){
        ans += i;
    }
    return ans ;
}
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i, ans=0;
    string name[105];
    map <char, int> counts;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> name[i];
        counts[name[i][0]]++;
 
    }
    for (i = 0; i < n; i++){
        if (counts[name[i][0]] > 1){
            if(counts[name[i][0]] % 2 != 0){
                ans += permutation(counts[name[i][0]] / 2);
                ans += permutation((counts[name[i][0]] / 2)+1);
            }
            else{
                ans += permutation(counts[name[i][0]] / 2);
                ans += permutation(counts[name[i][0]] / 2);
            }
 
 
            counts[name[i][0]] = 0;
        }
 
    }
    cout << ans << endl;
 
 
return 0;
}