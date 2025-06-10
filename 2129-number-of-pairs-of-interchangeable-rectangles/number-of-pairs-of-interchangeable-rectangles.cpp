class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
    unordered_map<double, long long> ratioCount;
        long long count = 0;
        for ( int i = 0 ; i < rectangles.size() ; i++) {
            vector<int> rect = rectangles[i];
            double ratio = (double)rect[0] / rect[1];
            count += ratioCount[ratio];  
            ratioCount[ratio]++;         
        }

        return count;    
    }
};