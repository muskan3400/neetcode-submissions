class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length()!=t.length())return false;
        int [] test = new int[26];

        for(int i=0;i<s.length();i++){
            test[s.charAt(i)-'a']++;
            test[t.charAt(i)-'a']--;
        }

        for(int i=0;i<26;i++){
            if(test[i]!=0)return false;
        }
       return true;

    }
}
