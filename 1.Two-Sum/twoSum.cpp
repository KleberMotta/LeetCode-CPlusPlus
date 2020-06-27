class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        map<int, int> nums_table;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];
            auto it = nums_table.find(comp);
            if (it != nums_table.end())
            {
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            }
            nums_table[nums[i]] = i;
        }

        throw "No sum found!";
    }
};