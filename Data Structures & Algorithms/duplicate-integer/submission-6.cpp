class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int i:nums)
        { 
            if (mp.count(i)) return true;
            else{
                mp[i]++;
            }

        }
        return false;
    }
};