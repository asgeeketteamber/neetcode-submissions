class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int n=nums.size();
        unordered_set<int> st (nums.begin(),nums.end());
        int longest_length=0;

        for(int num:nums)
        {
            int length=1;
            if(st.count(num-1))
            {
                continue;
            }
            int current_num=num;
            
            while(st.count(current_num+1))
            {
                length++;
                current_num++;
               
            }
            longest_length=max(longest_length,length);
        }
        return longest_length;

    }
};
