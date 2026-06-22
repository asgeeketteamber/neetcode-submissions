class Solution {
    private:
    int binarySearch(int start,int end,int target,vector<int>&nums)
    {
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]<target)
            {
                return binarySearch(mid+1,end,target,nums);
            }
            else if(nums[mid]>target)
            {
                return binarySearch(start,mid-1,target,nums);;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(0,nums.size()-1,target,nums);
       
        
    }
};
