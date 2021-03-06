
// NOTE 1:- This Question is Combination of string.

#include <iostream>
#include <vector>
using namespace std;

void word_selection(int idx, int k, string &s, string ans)
{
    if (idx == s.size())
    {
        if (ans.size() == k)
            cout << ans << endl;
        return;
    }

    word_selection(idx + 1, k, s, ans + s[idx]);
    word_selection(idx + 1, k, s, ans);
}

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<bool> vis(26, false);
    string ss = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (!vis[s[i] - 'a'])
        {
            vis[s[i] - 'a'] = true;
            ss += s[i];
        }
    }
    word_selection(0, k, ss, "");
}