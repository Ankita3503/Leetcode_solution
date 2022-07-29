class Solution {
public:
    bool isValid(string s) {
        
        stack<char>stack;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            {
                stack.push(ch);
            }
            else if(!stack.empty() && ((ch==')'  && stack.top()=='(' ) || (ch=='}'  && stack.top()=='{' ) || (ch==']'  && stack.top()=='[' )))
                   {
                       stack.pop();
                   }
            else
            {
             return false;
            }
        } 
        
        if(stack.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
