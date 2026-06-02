class MinStack {
private:
    stack<long long int> st; //no overflow
    long long int min;
public:

    MinStack() {   
     
    }
    
    void push(int val) {
     if(st.empty())
     {
        st.push(val);
        min=val;
     }
     else{
        if(val>=min)  st.push(val);
        else{
            st.push((long long)2*val-min);
            min=val;

        }
     }
          
        
    }
    
    void pop() {
        long long int x=st.top();
        st.pop();
        if(x<min)
        {
           min=2*min-x;
        }


    }
    
    int top() {
        long long int x=st.top();
        if(x<min) return min;
        else{
            return x;
        }
        
    }
    
    int getMin() {
        return min;
        
    }
};
