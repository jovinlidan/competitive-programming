#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n , d[105], left=0, right=0, l, r, total=0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> d[i];
        total += d[i];
    }
 
    cin >> l >> r;
    if(l > r){
        int temp = l;
        l = r;
        r = temp;
    }
 
    for(int i = 1; i <= n; i++){
        if(i >= l && i < r){
            left += d[i];
        }
    }
    right = total - left;
    cout << min(left,right) << endl;
 
 
    return 0;
}