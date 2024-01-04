#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, a, total=0, ans=0, oddCount=0, evenCount=0;
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a % 2==0)
            evenCount++;
        else
            oddCount++;
        total += a;
    }
 
    if(total % 2 == 0){
        ans += evenCount;
    }
    else if (total % 2 != 0){
        ans += oddCount;
    }
 
 
 
    cout << ans << endl;
 
 
    return 0;
}