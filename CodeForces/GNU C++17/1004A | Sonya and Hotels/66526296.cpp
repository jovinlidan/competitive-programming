#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n, d, hotels[105], i, cnt = 2, htl =0, z=0;
    cin >> n >> d;
 
    for(i = 0; i < n; i++){
        cin >> hotels[i];
    }
 
    sort(hotels, hotels+n);
 
    for(i = 1; i < n; i++){
        htl = max(z, ((hotels[i] -d) - (hotels[i-1] + d)+1));
        if(htl > 2) htl = 2;
        cnt+= htl;
    }
 
    cout << cnt << endl;
 
 
    return 0;
}