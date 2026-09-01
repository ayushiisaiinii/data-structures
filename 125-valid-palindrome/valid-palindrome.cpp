class Solution {
public:
    bool isPalindrome(string s) {
        string temp1="";
        string temp2="";
        int i,j;
        for(int i=0; i<s.length();i++){
            if(s[i]>='a' && s[i]<='z' ||
            s[i]>='A' && s[i]<='Z' ||
            s[i]>='0' && s[i]<='9'){
                temp1+=s[i];
            }
        }
        for(i=0;i<temp1.length();i++){
            temp1[i]=tolower(temp1[i]);
        }
        
        for(int j=temp1.length()-1;j>=0;j--){
            temp2+=temp1[j];
        }
        if(temp1!=temp2){
            return false;
        }
        return true;
    }
};