class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq={}
        if(len(s)) != (len(t)):
            return False
        for i in s:
            freq[i]=freq.get(i,0)+1
        for j in t:
            freq[j]=freq.get(j,0)-1
            if(freq[j]<0):
                return False
        return True
        