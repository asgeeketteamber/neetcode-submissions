class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0;
        int j=n-1;
        int required_num=0;
       
        while (i<j && j>=0)
        {
            required_num=numbers[i]+numbers[j];
            if(required_num==target)
            {
                return {i+1,j+1};
            }
            else if(required_num>target)
            {
                j--;
            }
            else if(required_num<target)
            {
                i++;
            }
        }
        return{-1,-1};

    }
};
