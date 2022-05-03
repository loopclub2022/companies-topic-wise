/* question link -https://leetcode.com/problems/valid-parentheses/ */
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       int i=0;
        while(i<s.length())
        {
            if(s[i]=='{' or s[i]=='(' or s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size()==0)
                {
                    return false;
                }
                else
                {
                    if(st.top()=='{' and s[i]=='}' or st.top()=='[' and s[i]==']' or st.top()=='(' and s[i]==')')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            i++;
        }
        return st.empty();
        
    }
};