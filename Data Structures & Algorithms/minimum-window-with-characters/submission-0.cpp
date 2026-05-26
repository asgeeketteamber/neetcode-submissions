class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<int,int> mp;
      
        int r=0;
        int minIndex=INT_MAX;
        int sIndex=-1;
        int count=0;
        int l=0;
        for(auto i:t) mp[i-'a']++;
        while(r<s.size() )
            {
                if(mp[s[r]-'a']>0)
                {
                    count++;
                }
                mp[s[r]-'a']--; 
                r++;
                while(count==t.size() && l<s.size())
                {
                    if(minIndex>r-l)
                    {
                        minIndex=r-l;
                        sIndex=l;
                    }
                    mp[s[l]-'a']++;
                   if( mp[s[l]-'a']>0)
                   {
                    count--;
                   }
                   l++;
                }
            }
               
        
            
        
        return sIndex==-1? "" :s.substr(sIndex,minIndex);
        
    
    
     }   
    
};
