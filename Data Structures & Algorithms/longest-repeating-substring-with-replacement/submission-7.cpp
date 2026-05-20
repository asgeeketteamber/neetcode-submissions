class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int freq[26]={}; //using an array rather than a hash map because we know key space already and it is going to be fixedi.e 26 so better to use array 
        int i=0;
        int res=0;
        int maxfreq=0;
   
        for(int j=0;j<n;j++)
        {
            freq[s[j]-'A']++;
            maxfreq=max(maxfreq,freq[s[j]-'A']);
            if((j-i+1)-maxfreq>k)
            {
                freq[s[i]-'A']--;
                i++;
                
                
            }
            res=max(res,(j-i+1));
    
            
        }
        return res;
        
    }
};
