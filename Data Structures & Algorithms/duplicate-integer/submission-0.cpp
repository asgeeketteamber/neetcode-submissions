class Solution {
public:
    bool hasDuplicate(vector<int>& nums)
    {
        unordered_map<int,int> container;
     for(int x:nums)
     {
        if(container.find(x)!=container.end())
        {
            return true;
        }
        container[x]++;
     }
     return false;
     
        
    }
};