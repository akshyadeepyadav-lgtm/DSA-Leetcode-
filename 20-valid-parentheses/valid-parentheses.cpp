class Solution {
public:
    bool isValid(string s) {
        int index=0;
        stack <char> st;
        while(s[index]!='\0'){
            if(s[index]=='/' && s[index+1]=='*'){
                st.push(s[index++]);
                st.push(s[index]);
            }
            else  if(st.empty()==0 && st.top()=='*'){
                while(s[index]!='\0' && !(s[index]=='*' && s[index+1]=='/')){
                    index++;
                }
            }
            else if(s[index]=='(' || s[index]=='[' || s[index]=='{' ) st.push(s[index]);
            else if(st.empty()){
                if((s[index]==')')||(s[index]=='}')||(s[index]==']')) return false;
            }
            else if(s[index-1]=='*' && s[index]=='/' && st.top()=='*'){
                st.pop();
                st.pop();
            }
            else if((s[index]==')'&& st.top()=='(')||(s[index]=='}'&& st.top()=='{')||(s[index]==']'&& st.top()=='[')) st.pop();
            else return false;
            index++;
        }
        if(st.empty()) return true;
        else return false;
    }
};