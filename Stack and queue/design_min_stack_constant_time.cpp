/* question link -https://leetcode.com/problems/min-stack/ */
class MinStack {
    stack<int>st;
    stack<int>st2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        int min=st2.empty()||val<st2.top()?val:st2.top();
        st2.push(min);
        
    }
    
    void pop() {
        st.pop();
        st2.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return st2.top();
        
    }
};
