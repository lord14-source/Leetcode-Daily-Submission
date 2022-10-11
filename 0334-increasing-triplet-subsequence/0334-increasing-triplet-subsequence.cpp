class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
 int fir = INT_MAX, sec = INT_MAX;
        for (auto num : nums) {
            if (num < fir)
                fir = num;
            else if (fir < num && num < sec)
                sec = num;
            else if (sec < num)
                return 1;
        }
        return 0;

        
    }
};