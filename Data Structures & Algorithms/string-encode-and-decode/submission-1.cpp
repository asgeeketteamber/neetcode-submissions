class Solution {
public:

    string encode(vector<string>& strs)
    {
        string res="";
        for(auto s:strs)
        {
            res+=to_string(s.length())+'#'+s;
        }
        return res;

    }

    vector<string> decode(string s)
    {
        vector<string> res;
        int i=0;
        while(i<s.length())
        {
            int j=i;
            while(j<s.length() && s[j]!='#')
            {
                j++;
            }
            //length exctraction
            int length=stoi(s.substr(i,j-i));

            //extract actual string
            string word=s.substr(j+1,length);
            res.push_back(word);

            //moving pointer ahead
            i=j+1+length;
        }
        return res;
    }
};
