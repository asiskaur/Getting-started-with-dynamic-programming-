class Solution {
//https://leetcode.com/problems/jump-game-ii/submissions/

public:
   
    
    int jump(vector<int>& nums) {
        
        int n =nums.size();
        int dp[n] ;   
        dp[n-1]=0;
        
        for(int i=0;i<n-1;i++)
            dp[i]=INT_MAX;
        
       for(int i=n-2;i>=0;i--){
           
           
           int min1 =INT_MAX;
           
           for(int j=i+1;j<=min(n-1,i+nums[i]);j++)
               
           {
               
               min1=min(min1,dp[j]);
           }
           
           if(min1!=INT_MAX){
               dp[i]=min1+1;
           }
           
           
       }
            return dp[0];
          
        
    }
};
