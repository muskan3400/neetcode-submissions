class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<List<Integer>,List<String>> map= new HashMap <>();
        List<List<String>> strings= new ArrayList<>();

        if(strs==null|| strs.length==0)return strings;

        for(String s : strs){
            int[] test=new int[26];
            for(int i=0;i<s.length();i++){
                test[s.charAt(i)-'a']++;
            }
            List<Integer> li=new ArrayList<>();
            for(int i=0;i<26;i++){
                li.add(test[i]);
            }

            if(!map.containsKey(li)){
                map.put(li,new ArrayList<String>());
            }
            map.get(li).add(s);
        }

        for(List<String> kk: map.values()){
            strings.add(kk);
        }return strings;
    }
}
