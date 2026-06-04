class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int i=0;
        int j=1;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>a;
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[k]);
                    ans.push_back(a);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                    
                }
                else if(sum<0)j++;
                else if(sum>0)k--;
            }
        }
        return ans;
    }
};
