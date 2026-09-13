class Solution {
public:
    int countDigits(int num) {
       int count=0;
       int real = num;
       while(num!=0){
         
         int last;
         last=num%10;
         num/=10;
         if(real%last==0)
         count++;

       }
       return count;
    }
};
