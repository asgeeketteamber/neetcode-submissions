class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string,vector<string>> mp;
        for(auto s:strs)
        {
            string hashstring="";
            vector<int> hi(26,0);
            for(auto ch:s)hi[ch-'a']++;
            for(int i=0;i<26;i++)
            {
                hashstring.push_back(hi[i]);
                hashstring.push_back('#'); //keeping disctinction of patterns 
            }
            mp[hashstring].push_back(s);
        }
            vector<vector<string>> anagrams;
            for(auto[key,vectofstrings]:mp)
            {
                anagrams.push_back(vectofstrings);
            }
            return anagrams;   
        
         
            
    }
};
