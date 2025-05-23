class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
    int years[101] = {0}; 
    for (auto& log : logs) {
            years[log[0] - 1950]++;     
            years[log[1] - 1950]--;     
        }
    int maxPop = 0, maxYear = 0, current = 0;
        for (int i = 0; i < 101; i++) {
            current += years[i];
            if (current > maxPop) {
                maxPop = current;
                maxYear = 1950 + i;
            }
        }

        return maxYear;    
    }
};