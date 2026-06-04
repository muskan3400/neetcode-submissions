class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int trap=0;
        int maxleft=height[i];
        int maxright=height[j];
        int maxtrap=0;

        while(i<j){
            maxleft=max(height[i],maxleft);
            maxright=max(height[j],maxright);
            trap=min(maxleft,maxright);
            if(maxleft<maxright){
                i++;
                trap-=height[i];
            }
            else {j--;
            trap-=height[j];
            }
            if (trap>0)maxtrap+=trap;
        }

        return maxtrap;
    }
};
