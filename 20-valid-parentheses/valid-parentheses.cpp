class Solution {
public:
bool isValid(string s) {
   stack<char>st;

   for(char ch:s)
   {
    if(ch=='(' || ch=='{' || ch=='[')
    {
        st.push(ch);
    }
    else
    {
        if(st.size()==0) return false;

        char topp=st.top();
        st.pop();
        if((topp=='(' &&  ch==')') || (topp=='{' && ch=='}') || (topp=='[' && ch==']'))
        {
            continue;
        }
        else
        {
            return false;
        }

    }
   }

    return st.empty();
   }
};