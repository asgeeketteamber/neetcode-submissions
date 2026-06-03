class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            
            int remaining_required= target-nums[i];
             if(mpp.find(remaining_required)!=mpp.end())
             {
                return{mpp[remaining_required],i};
             }
             mpp[nums[i]]=i;

        }

    }
};
