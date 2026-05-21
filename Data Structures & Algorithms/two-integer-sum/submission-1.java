class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> KeyIndice=new HashMap<>();
        int[]ans=new int[2];
        int k=0;
        for(int i=0;i<nums.length;i++){
            k=target-nums[i];
            if(KeyIndice.containsKey(k)){
                ans[1]=i;
                ans[0]=KeyIndice.get(k);
                return ans;
            }
            else{
                KeyIndice.put(nums[i],i);
            }
        }
        return null;
    }
}
