class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        i=0;
        freq={};
        res=0;
        maxfreq=0

        for j in range(len(s)):
             freq[s[j]]=1+freq.get(s[j],0); #freq.get(current count of value,or if it dosen't exist)
             maxfreq=max(maxfreq,freq[s[j]])
             while((j-i+1)-maxfreq>k):
                freq[s[i]]-=1
                i+=1
                

             res=max(res,j-i+1)
        return res


            
        