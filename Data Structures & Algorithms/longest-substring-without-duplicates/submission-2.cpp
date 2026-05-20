class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        unordered_set<char> st;
        int i=0;
        int count=0;
        
       for(int j=0;j<n;j++)
       {
        while(st.count(s[j]))
        {
            st.erase(s[i]);
            i++;
        }
        st.insert(s[j]);
        count=max(count,(j-i+1));
       }
       return count;
        
    }
};
