class Solution {
public:
    bool isValid(string s) {
        int index=0;
        stack <char> st;
        while(s[index]!='\0'){
            if(s[index]=='(' || s[index]=='[' || s[index]=='{' ) st.push(s[index]);
            else if(st.empty()){
                if((s[index]==')')||(s[index]=='}')||(s[index]==']')) return false;
            }
            else if((s[index]==')'&& st.top()=='(')||(s[index]=='}'&& st.top()=='{')||(s[index]==']'&& st.top()=='[')) st.pop();
            else return false;
            index++;
        }
        if(st.empty()) return true;
        else return false;
    }
};