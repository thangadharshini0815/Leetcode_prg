class Solution {
public:
    const int MOD = 1e9 + 7;

int countPairs(vector<int>& deliciousness) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int num : deliciousness) {
        for (int power = 1; power <= (1 << 21); power *= 2) { 
            count = (count + freq[power - num]) % MOD;
        }
        freq[num]++;
    }

    return count;
}
};