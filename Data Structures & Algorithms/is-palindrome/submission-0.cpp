class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        string k;
        for(char c:s){
            if(isalnum(c))k+=tolower(c);
        }
        int j=k.length()-1;
        while(i<j){
            if(k[i]==k[j]){
                i++;
                j--;
            }
            if(k[i]!=k[j])return false;
        }
        return true;
    }
};
