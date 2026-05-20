class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int maxWater=0;
        while(i<j)
        {
            //calculation of container 
            int width=j-i;
            cout<<i<<" "<<j<<endl;
            int height=min(heights[i],heights[j]);
            int water=width*height;
            maxWater=max(water,maxWater);
            cout<<maxWater<<endl;
            if(heights[i]<heights[j])
            {
                i++;
            }
            else{
                j--;
            }
          
           
        }
        return maxWater;

    }
};
