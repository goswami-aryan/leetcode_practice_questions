class Solution {
public:
    int signFunc(int x){
        if(x==0)
        return 0;
        if(x>0)
        return 1;
        else
        return -1;
     }

    int arraySign(vector<int>& nums) {
        int product =1;
     for(int i = 0 ; i<nums.size(); i++){
        if(nums[i]>0){
            int digit=1;
            product *=digit;
        }
        else if(nums[i]<0){
            int digit = -1;
            product *= digit;
        }
        else
        product = 0;

     }

     

     return signFunc(product);

    }
};
