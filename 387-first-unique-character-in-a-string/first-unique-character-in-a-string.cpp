class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> n;
        for (char c : s) {
            n[c]++;
        }
    for (int i = 0; i < s.length(); i++) {
            if (n[s[i]] == 1) {
            return i; 
            }
        }
        return -1; 
    }
};