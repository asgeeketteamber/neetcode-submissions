class Solution {
    private:
    int findMax(vector<int> &v){
        int n=v.size();
        int MaxInt=INT_MIN;
        for (int i=0;i<n;i++)
        {
        MaxInt=max(MaxInt,v[i]);
        }
        cout<<MaxInt;
        return MaxInt;

    }

    int calculateTotalHours(vector<int> &v,int hourly)
    {
        int totalH=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            totalH+=ceil((double)v[i]/(double)hourly);
        }
        cout<<totalH;
        return totalH;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int low=1;
    int high=findMax(piles);
    while(low<=high)
    {
        int mid =(low+high)/2;
        int totalH=calculateTotalHours(piles,mid);
        if(totalH<=h)
        {
        high=mid-1;
    }
    else{
        low=mid+1;
    }   
    }
    return low;
        
    }
};
