class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i=0; i<num.size(); i++){
            char digit = num[i];
            while(!st.empty() && k>0 && st.top()>digit){
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";

        string rev = "";

        while(!st.empty()){
            rev.push_back(st.top());
            st.pop();
        }

        // remove the Zero
        while(rev.size()>0 && rev.back() == '0'){
            rev.pop_back();
        }

        // reverse the string
        reverse(rev.begin(),rev.end());

        if(rev.empty()) return "0";

        return rev;
    }
};