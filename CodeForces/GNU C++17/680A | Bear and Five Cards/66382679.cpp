#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t[10], counts[105]= {}, ans =0, counters=0, data[10]= {}, mn=1e9;
    map <int, bool> tracker;
 
 
 
    for(int i = 0; i < 5; i++)
    {
        cin >> t[i];
        counts[t[i]]++;
 
    }
    for(int i = 0; i < 5; i++)
    {
        if(counts[t[i]] < 2)
        {
            ans+=t[i];
        }
        else if (counts[t[i]] > 3)
        {
            ans+=t[i];
            counts[t[i]]--;
        }
        else
        {
            if(tracker[t[i]] == false)
            {
                data[counters] = t[i];
                counters++;
                tracker[t[i]] = true;
            }
        }
 
    }
    if(counters > 1)
    {
        for(int i = 0; i < counters; i++)
        {
            mn = min(mn, data[i] * counts[data[i]]);
        }
        cout << ans + mn << endl;
    }
    else
    {
        cout << ans << endl;
    }
 
 
 
 
 
 
    return 0;
}