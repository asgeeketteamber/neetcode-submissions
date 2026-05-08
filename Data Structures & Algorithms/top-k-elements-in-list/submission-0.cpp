typedef pair<int,int> pi;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> umap;
        for(auto x:nums)
        {
            umap[x]++;
        }
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        for(auto x:umap)
        {
            pq.push(make_pair(x.second,x.first));
            if (pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty())
        {
            pair<int,int> temp=pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        return ans;

    }
};
