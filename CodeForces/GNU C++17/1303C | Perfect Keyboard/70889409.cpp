#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        deque<char> arr;
        unordered_map <char, bool> visit;
        visit.clear();
        arr.clear();
        int length = s.length();
        bool valid = true;
        for(int i = 0; i < length; i++)
        {
            if(!visit[s[i]])
            {
                visit[s[i]] = true;
                if(i != 0)
                {
                    int l, r;
                    l = arr.front();
                    r = arr.back();
                    if(l == s[i-1])
                    {
                        arr.push_front(s[i]);
                    }
                    else if(r == s[i-1])
                    {
                        arr.push_back(s[i]);
                    }
                    else
                    {
                        valid = false;
                        //cout << "satu\n";
                        break;
                    }
                }else arr.push_back(s[i]);
            }else
            {
                int mid = 0;
                for(int j = 0; j < arr.size(); j++)
                {
                    if(arr[j] == s[i])
                    {
                        if(j == 0)
                        {
                            if(arr[j+1] != s[i-1])
                            {
                                valid = false;
                                //cout << "dua1\n";
                                break;
                            }
                        }
                        else if(j == arr.size()-1)
                        {
                            if(arr[j-1] != s[i-1])
                            {
                                valid = false;
                               // cout << "dua2\n";
                                break;
                            }
                        }
                        else
                        {
                            if(arr[j+1] != s[i-1] && arr[j-1] != s[i-1])
                            {
                                valid = false;
                               // cout << "dua3\n";
                               // cout << arr[j-1] << s[i-1] << endl;
                                break;
                            }
                        }
                    }
                }
                if(!valid)break;
            }
        }
        if(valid)
        {
            cout << "YES\n";
            char az = 'a';
            for(int i = 0; i < arr.size(); i++)
            {
                cout << arr[i];
            }
            for(int i = 1; i <= 26; i++)
            {
                if(!visit[az])cout << az;
                az++;
            }
            cout <<endl;
        }
        else cout << "NO\n";
    }
 
 
 
 
 
 
 
 
 
    return 0;
}