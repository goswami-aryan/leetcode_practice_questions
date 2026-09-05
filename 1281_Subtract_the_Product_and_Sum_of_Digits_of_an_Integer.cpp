class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0; 
        int l;
    
     while(n!=0){

       l=n%10;
       product *= l;
       sum += l;
       n=n/10;
         

        }

        return product-sum;
    
    }
};
