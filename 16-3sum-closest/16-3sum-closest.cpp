class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end());
        int left;
        int right;
        int min = pow(2,31) - 1;
        int sum;
        int diff;
        int ans;
        for(int i = 0; i < nums.size(); i++)
        {
            left = i + 1;
            right = nums.size() - 1;
            while(left < right)
            {
                sum = nums.at(i) + nums.at(left) + nums.at(right);
                diff = abs(sum - target);
                if(sum > target && diff <= min)
                {
                    right--;
                    min = diff;
                    ans = sum;
                }
                else if(sum > target && diff > min)
                    right--;
                else if(sum < target && diff <= min)
                {
                    left++;
                    min = diff;
                    ans = sum;
                }
                else if(sum < target && diff > min)
                    left++;
                else if(sum == target)
                    return sum;
            }
        }
        return ans;
        
    }
};