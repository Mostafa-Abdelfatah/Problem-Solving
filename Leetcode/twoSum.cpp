class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   vector<int> ans;
    map<int,int> f;
    for (int i = 0; i < nums.size(); i++)
    {
        f.insert({nums[i], i});
    }

    for (int i = 0; i < nums.size(); i++)
    {
        auto g = f.find(target - nums[i]);
        if (g != f.end() && g->second != i)
        {
            ans.push_back(i);
            ans.push_back(g->second);
            break;
        }
    }

    return ans;
    }
};