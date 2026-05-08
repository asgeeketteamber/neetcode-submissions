class Solution {
private:
bool isalnum(char c)
{
    if((c>='a'&&c<='z')||
    (c>='A'&&c<='Z')||(c>='0'&&c<='9')
    )
    {
        return true;
    }
    return false;

}
char toLower(char c){
    if(c>='A'&& c<='Z')
    {
        return c+32;
    }
    return c;
}

public:
    bool isPalindrome(string s)
    {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            while(i<j && !isalnum(s[i]))i++;
            while(i<j && !isalnum(s[j]))j--;
            if(toLower(s[i])!=toLower(s[j]))return false;

            i++;
            j--;
        }
        return true;
    }
        
};
