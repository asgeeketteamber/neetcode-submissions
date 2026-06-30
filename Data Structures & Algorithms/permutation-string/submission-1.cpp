class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        int freq1[26]={0};
        int freq2[26]={0};
        if(n1>n2) return false;
        

        for (int i=0;i<n1;i++)
        {
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }

        int matches=0;
        for(int i=0;i<26;i++)
        {
           if(freq1[i]==freq2[i])
           {
            matches++;
           }
        }
        if (matches==26) return true;
        for(int j=n1;j<n2;j++)
        {
            int inChar=s2[j]-'a';
            int outChar=s2[j-n1]-'a';
            freq2[inChar]++;
            if(freq2[inChar]==freq1[inChar]) matches++;
            else if(freq2[inChar]==freq1[inChar]+1) matches--;

            freq2[outChar]--;
            if(freq2[outChar]==freq1[outChar]) matches++;
            else if(freq2[outChar]==freq1[outChar]-1) matches--;

            if (matches==26) return true;



        }
        return false;
    }
};
