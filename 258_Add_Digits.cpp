class Solution {
public:
    int addDigits(int num) {
        int n = num;
        int sum;

        do {
            sum = 0;

            while (n > 0) {
                int l = n % 10;
                sum += l;
                n /= 10;
            }

            n = sum;

        } while (sum > 9);

        return sum;
    }
};
