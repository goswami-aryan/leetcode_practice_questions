class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            
            elementSum += nums[i];

            int x = nums[i];
            int singledigitsum = 0;

            while(x > 0) {
                int l = x % 10;
                x /= 10;
                singledigitsum += l;
            }

            digitSum += singledigitsum;
        }
         if((elementSum - digitSum)>0)
         return elementSum - digitSum;
        
        return -(elementSum - digitSum);
      
    }
};
