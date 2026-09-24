class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n;
        for(int i=0; i<nums.size(); i++){
           n=nums[i];
           int sum=0;
            while(n>0){
                int l=n%10;
                sum+=l;
                n/=10;
            }
            if(sum==i)
            return i;
        }
       
            return -1;
    }
};
