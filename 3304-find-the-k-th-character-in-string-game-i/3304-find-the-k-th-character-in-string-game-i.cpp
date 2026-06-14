class Solution {
public:
    char kthCharacter(int k) {
        int shifts = __builtin_popcount(k - 1);
        return 'a' + (shifts % 26);
    }
};