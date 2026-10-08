class Solution {
public:
    int minAddToMakeValid(string s) {
        int start=0;
        int last=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                start++;
            }
            else{
                if(start>0){
                    start--;
                }
                else{
                    last++;
                }
            }
        }
        return start+last;
    }
};

// TC->O(n)
// SC->O(1)