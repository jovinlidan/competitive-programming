#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, m, N[100005], M[100005], j, k, i, a, b, counts=0, nOdd=0, nEven=0, mOdd=0, mEven=0, nTemp=0, mTemp=0;
    int T;
    cin >> T;
    for(i = 0; i < T; i++)
    {
        counts=0;
        nEven = mEven = nOdd = mOdd = 0;
        cin >> n;
        for(j = 0; j < n; j++)
        {
            cin >> nTemp;
            if(nTemp % 2 ==0) nEven++;
            else nOdd++;
        }
        cin >> m;
        for(j = 0; j < m; j++)
        {
            cin >> mTemp;
            if(mTemp % 2 ==0) mEven++;
            else mOdd++;
        }
        if(nEven != 0)
        counts += nEven *  mEven;
        counts += nOdd *  mOdd;
 
 
 
 
 
        cout << counts<< endl;
 
    }
 
 
 
 
 
 
 
    return 0;
}