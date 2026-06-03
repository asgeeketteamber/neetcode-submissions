class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for (string i:tokens)
        {
            
            int sol;
            if(i=="+"||i=="*"||i=="-"||i=="/")
            {
                int num2=st.top();
                st.pop();
                int num1=st.top();
                st.pop();
                if(i=="+")
                {
                    sol=num1+num2;
                    st.push(sol);

                }
                if(i=="-")
                {
                    sol=num1-num2;
                    st.push(sol);
                }
                if(i=="*")
                {
                    sol=num1*num2;
                    st.push(sol);

                }
                if(i=="/")
                {
                    sol=num1/num2;
                    st.push(sol);

                }
            }
            else{
                st.push(stoi(i));

            }
          
        
        }
        return st.top();
        
    }
};
