//https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        
        int n=nums.size();
         int i=0;
        int j=0;
        int t;
        t=k;
        
        while(i<n){
            
            if(nums[i]==0){
                
                t--;
            }
            if(t<0){
                
                if(nums[j]==0){
                    
                    t++;
                }
                
                j++;
            }
            
            i++;
        }
        
        return i-j;
        
    }
};
