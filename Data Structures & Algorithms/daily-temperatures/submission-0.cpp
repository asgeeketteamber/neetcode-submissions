typedef pair<int,int> pi;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<pi> st;
    int n=temperatures.size();
    vector<int> res(n,0);
     
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&& temperatures[i]>st.top().first)
        {
            int index=st.top().second;
            res[index]=i-index;
            st.pop();
        }
        st.push({temperatures[i],i});
    }
    return res;
    }
};
