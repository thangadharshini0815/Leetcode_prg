class Solution {
public:
const int MOD = 1e9 + 7;
int countPairs(vector<int>& deliciousness) {
    unordered_map<int, int> freq;
    int count = 0;
    for (int num : deliciousness) {
        for (int n = 1; n <= (1 << 21); n *= 2) { 
            count = (count + freq[n - num]) % MOD;
        }
        freq[num]++;
    }
 return count;
}
};