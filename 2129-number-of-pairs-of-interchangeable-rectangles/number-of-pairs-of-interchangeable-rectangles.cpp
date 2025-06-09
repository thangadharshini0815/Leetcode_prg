class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<string, long long> ratioCount;
        long long result = 0;
        for (auto& rect : rectangles) {
            int w = rect[0], h = rect[1];
            int g = gcd(w, h);
            w /= g;
            h /= g;
        string key = to_string(w) + "/" + to_string(h);
            result += ratioCount[key]++;
        }
    return result;
    }
private:
   int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};