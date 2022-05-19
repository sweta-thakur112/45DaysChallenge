class Solution {
public:
    bool isValid(string s) {
        if(s[0]==')'||s[0]=='}'||s[0]==']')
            return false;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if(st.empty()!=true)
            {
              
               {
                    if(s[i]==')'&&st.top()=='(')
                {
                    st.pop();
                }
                else if(s[i]=='}'&&st.top()=='{')
                    st.pop();
                else if(s[i]==']'&&st.top()=='[')
                    st.pop();
                else
                {
                    return false;
                    break;
                }
                     
               }
            }
            else
                return false;
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
