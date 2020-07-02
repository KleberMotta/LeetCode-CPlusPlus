#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {

        int n = s.size(), maxSize = 0;
        map<int, string> map;

        if (s.empty())
            return s;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; i + j < n; ++j)
            {
                if (j + 1 > maxSize && s.at(i) == s.at(j + i))
                {
                    int k = 0;
                    string tmp = s.substr(i, j + 1);
                    for (int l = tmp.size() - 1; k < tmp.size() / 2; k++, l--)
                    {
                        if (tmp.at(k) != tmp.at(l))
                        {
                            break;
                        }
                    }
                    if (k == tmp.size() / 2)
                    {
                        maxSize = tmp.size();
                        map[tmp.size()] = tmp;
                    }
                }
            }
        }
        return map.find(maxSize)->second;
    }
};

int main()
{
    string tst = "cyyoacmjwjubfkzrrbvquqkwhsxvmytmjvbborrtoiyotobzjmohpadfrvmxuagbdczsjuekjrmcwyaovpiogspbslcppxojgbfxhtsxmecgqjfuvahzpgprscjwwutwoiksegfreortttdotgxbfkisyakejihfjnrdngkwjxeituomuhmeiesctywhryqtjimwjadhhymydlsmcpycfdzrjhstxddvoqprrjufvihjcsoseltpyuaywgiocfodtylluuikkqkbrdxgjhrqiselmwnpdzdmpsvbfimnoulayqgdiavdgeiilayrafxlgxxtoqskmtixhbyjikfmsmxwribfzeffccczwdwukubopsoxliagenzwkbiveiajfirzvngverrbcwqmryvckvhpiioccmaqoxgmbwenyeyhzhliusupmrgmrcvwmdnniipvztmtklihobbekkgeopgwipihadswbqhzyxqsdgekazdtnamwzbitwfwezhhqznipalmomanbyezapgpxtjhudlcsfqondoiojkqadacnhcgwkhaxmttfebqelkjfigglxjfqegxpcawhpihrxydprdgavxjygfhgpcylpvsfcizkfbqzdnmxdgsjcekvrhesykldgptbeasktkasyuevtxrcrxmiylrlclocldmiwhuizhuaiophykxskufgjbmcmzpogpmyerzovzhqusxzrjcwgsdpcienkizutedcwrmowwolekockvyukyvmeidhjvbkoortjbemevrsquwnjoaikhbkycvvcscyamffbjyvkqkyeavtlkxyrrnsmqohyyqxzgtjdavgwpsgpjhqzttukynonbnnkuqfxgaatpilrrxhcqhfyyextrvqzktcrtrsbimuokxqtsbfkrgoiznhiysfhzspkpvrhtewthpbafmzgchqpgfsuiddjkhnwchpleibavgmuivfiorpteflholmnxdwewj";

    Solution s;

    cout << s.longestPalindrome(tst) << endl;
}