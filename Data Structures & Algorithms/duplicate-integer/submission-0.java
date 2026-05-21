class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> hey = new HashSet<>();
        for(int i: nums){
            if(hey.contains(i))return true;

            hey.add(i);
        }
        return false;
    }
}