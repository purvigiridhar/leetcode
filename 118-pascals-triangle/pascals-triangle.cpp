#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> pascalTriangle;

        for (int rowNum = 1; rowNum <= numRows; rowNum++) {
            std::vector<int> currentRow;
            long long val = 1; // Tracks nCr combinations safely
            
            currentRow.push_back(val); 
            
            for (int col = 1; col < rowNum; col++) {
                // Using long long prevents integer overflow before division
                val = val * (rowNum - col) / col; 
                currentRow.push_back(static_cast<int>(val));
            }
            
            pascalTriangle.push_back(currentRow);
        }

        return pascalTriangle;
    }
};
