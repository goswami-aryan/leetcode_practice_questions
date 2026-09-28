class Solution {
public:
    int maxDepth(string s) {
        int count=0,a=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')
            {count++;
             a=max(count,a);
            }
            else if(s[i]==')')
            count--;

        }

        return a;
    }
};
