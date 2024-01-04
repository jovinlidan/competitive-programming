#include <bits/stdc++.h>
#define lli unsigned long long int
using namespace std;
 
 
lli lcm(lli a,lli b)
{
    if(b == 0) return a;
    return  a * (b/ __gcd(a,b));
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    lli n, arr[100005] = {}, lcmNya = 0;
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i >= 1)
        {
            lcmNya = lcm(arr[i], lcmNya);
        }
        else
        {
            lcmNya = arr[i];
        }
    }
    //cout << lcmNya << endl;
    for(int i = 0; i < n ; i++)
    {
        lli temp = lcmNya / arr[i];
        if((lcmNya / arr[i])  != ceil(lcmNya * 1.0 / arr[i]))
        {
            cout << "No\n";
            return 0;
        }
        while(temp > 1)
        {
            if(temp % 2 == 0)
            {
                temp /= 2;
            }
            else if(temp % 3 == 0)
            {
                temp /= 3;
            }
            else
            {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}