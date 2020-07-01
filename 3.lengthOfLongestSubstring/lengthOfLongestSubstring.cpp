#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> index(128); // Assuming ASCII 128
        int start = 0, len = 0;

        for (int i = 0; i < s.size(); i++)
        {
            start = max(index[s.at(i)], start);
            len = max(len, i - start + 1);
            index[s.at(i)] = i + 1;
        }

        return len;
    }
};

int main()
{
    string tst = "abcabcbb";

    Solution s;

    cout << s.lengthOfLongestSubstring(tst) << endl;
}