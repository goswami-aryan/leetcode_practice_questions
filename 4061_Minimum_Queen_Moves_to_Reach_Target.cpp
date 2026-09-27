class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int srow = source[0], scolumn= source[1];
        int trow=  target[0], tcolumn= target[1];

        if(srow==trow && scolumn == tcolumn)
        return 0;

        if(srow==trow || scolumn == tcolumn)
        return 1;

        if(abs(srow-trow) == abs(scolumn-tcolumn))
        return 1;

        return 2;
    }
};
