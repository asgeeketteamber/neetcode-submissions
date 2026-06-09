class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        stack<int> st; 
        int maxArea=0;
        int element=0;
        int pse=0;
        int nse=0;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                element= st.top();
                st.pop();
                nse=i;
                pse=st.empty()?-1:st.top();
                maxArea=max(heights[element]*(nse-pse-1),maxArea);


            }
            st.push(i);

        }
         while(!st.empty())
            {
                nse=n;
                element=st.top();
                st.pop();
                pse=st.empty()?-1:st.top();
                maxArea=max(heights[element]*(nse-pse-1),maxArea);

            }
        return maxArea;
    }
};
