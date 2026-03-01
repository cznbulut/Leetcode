#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {

        /*        
        int maxWater = 0;
        int currentWater;

        for(int i=0; i<height.size(); i++) {
            for(int j=i+1; j<height.size(); j++) {
                if(height.at(i) < height.at(j)) {
                    currentWater = height.at(i) * (j-i);
                } else {
                    currentWater = height.at(j) * (j-i);
                }

                if(currentWater > maxWater) {
                    maxWater = currentWater;
                }
            }
        }
        */

        int links = 0;
        int rechts = height.size() - 1;
        int currentWater = 0;
        int max = 0;

        while (links < rechts) {
            currentWater = std::min(height.at(links), height.at(rechts)) * (rechts - links); //

            if(height[links] < height[rechts]) {
                links++;
            } else {
                rechts--;
            }

            if(currentWater > max) {
                max = currentWater;
            }
        }

        return max;

    }
};