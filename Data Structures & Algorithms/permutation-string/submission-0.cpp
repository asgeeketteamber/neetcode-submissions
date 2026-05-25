class Solution {
    bool checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return false;

            } 
        }
        return true;
        

    }
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        int freq1[26]={0};
       
        
        for(int i=0;i<s1.size();i++)
        {
            freq1[s1[i]-'a']++;
        }
       
        
        int windowSize=s1.size();
        for(int j=0;j<s2.size();j++)
        {
            int windowIndex=0;
            int k=j;
             int freq2[26]={0};
        while(windowIndex<windowSize && k<s2.length())
        {
            freq2[s2[k]-'a']++;
            k++;
            windowIndex++;
        }
        if(checkequal(freq1,freq2))
        {
            return true;
        }
        }
        return false;

      
    }
};
