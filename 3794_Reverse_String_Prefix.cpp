class Solution {
public:
    string reversePrefix(string s, int k) {
        string s1="",s2="",s3; 
        
        for(int i=k-1; i>=0; i--){
        s1=s1+s[i];
        
        }
        
        for(int j=k; j<s.length(); j++){
            
            s2=s2+s[j];
            
        }
        s3=s1+s2;
        return s3;
    }
};
