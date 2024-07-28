// Valid Parenthesis
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false
 class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        
        for(char c: s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(c==')' and st.top()=='('){
                    st.pop();
                }
                else if(c=='}' and st.top()=='{'){
                    st.pop();
                }
                else if(c==']' and st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false; 
    
    }
};