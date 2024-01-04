#include <bits/stdc++.h>
#define mxN 10000005
#define INF -1e9
typedef long long int ll;
 
using namespace std;
 
string t1 = "", t2 = "";
 
int toInt(string s)
{
    stringstream cvt(s);
    int x = 0;
    cvt >> x;
    return x;
}
 
void solve(string s)
{
    bool v = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '-' || s[i] == ':')
        {
            v = 1;
            continue;
        }
        if(!v)t1.push_back(s[i]);
        else t2.push_back(s[i]);
 
    }
}
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    set<pair<int, pair<int, pair<int, string>>>, greater<pair<int, pair<int, pair<int, string>>>> > st;
    string team;
    cin >> n;
    map<string, pair<int, pair<int, int>>> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> team;
    }
    string matches, scores, team1, team2;
    int score1, score2;
    for(int i = 0; i < n*(n-1)/2; i++)
    {
        cin >> matches >> scores;
 
        solve(matches);
        team1 = t1;
        team2 = t2;
        t1 = t2 = "";
 
        solve(scores);
        score1 = toInt(t1);
        score2 = toInt(t2);
 
        t1 = t2 = "";
        if(score1 > score2)
        {
            mp[team1].first +=3 ;
            mp[team1].second.first += (score1 - score2);
            mp[team1].second.second += (score1);
 
            mp[team2].second.first += (score2 - score1);
            mp[team2].second.second += (score2);
 
        }
        else if(score2 > score1)
        {
            mp[team2].first +=3 ;
            mp[team2].second.first += (score2 - score1);
            mp[team2].second.second += (score2);
 
            mp[team1].second.first += (score1 - score2);
            mp[team1].second.second += (score1);
        }
 
        else
        {
            mp[team1].first++;
            mp[team2].first++;
            mp[team1].second.second += (score1);
            mp[team2].second.second += (score2);
        }
    }
 
    for(auto i : mp)
    {
        st.insert({i.second.first , {i.second.second.first, {i.second.second.second, i.first}}});
        //cout << i.second.first << " " << i.second.second.first << " " << i.second.second.second << " " <<  i.first;
    }
    int xxx = 0;
    vector<string> ans;
    for(auto i : st)
    {
        ans.push_back(i.second.second.second);
        xxx++;
        if(xxx == n/2)break;
    }
    sort(ans.begin(), ans.end());
    for(auto i : ans)
    {
        cout << i << '\n';
    }
 
 
 
    return 0;
}
 
 