class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int low= 0;
        int high =n-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            cout<<mid<<endl;
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                cout<<ans<<endl;
                low=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                cout<<ans<<endl;
                high=mid-1;

            }
        }
        return ans;

        
    }
};
