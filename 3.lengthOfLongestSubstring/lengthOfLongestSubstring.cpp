#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        map<char, int> aux_map;
        int first = 0, ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s.at(i);
            if (aux_map.count(c))
            {
                if (aux_map.find(c)->second >= first)
                {
                    first = aux_map.find(c)->second + 1;
                }
            }
            ans = max(ans, i - first + 1);
            aux_map[c] = i;
        }

        return ans;
    }
};

int main()
{
    string tst = "abcabcbb";

    Solution s;

    cout << s.lengthOfLongestSubstring(tst) << endl;
}