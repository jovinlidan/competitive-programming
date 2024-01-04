#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int rope[10], d, ans=0;
 
    for(int i = 0; i < 3; i++){
        cin >> rope[i];
    }
    cin >> d;
 
    sort(rope, rope+3);
    if(rope[1] - rope[0] < d){
        ans += abs(d-(rope[1] - rope[0]));
    }
    if(rope[2] - rope[1] < d){
        ans += abs(d-(rope[2] - rope[1]));
    }
 
    cout << ans << endl;
 
 
 
 
return 0;
}