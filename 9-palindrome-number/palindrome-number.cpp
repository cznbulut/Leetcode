class Solution {
public:
    bool isPalindrome(int x) {
        /*
        std::vector<int> digits;
        digits.push_back(x % 10);
        x /= 10;
        std::reverse(digits.begin(), digits.end());

        for(int i=0; i<digits.size()/2; i++) {
            if(digits[i] == digits[digits.size()-1-i]) {
                continue;
            }
            else {
                return false;
            }
        }

        return true;
        */

        std::string x_string = std::to_string(x);
        for(int i=0; i < x_string.length()/2; i++){
            if(x_string[i] == x_string[x_string.length()-1-i]){
                continue;
            }
            else {
                return false;
            }
        }

        return true; 

    }
};