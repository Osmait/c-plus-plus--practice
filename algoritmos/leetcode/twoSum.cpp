#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (m.find(complement) != m.end()) {
                result.push_back(m[complement]);
                result.push_back(i);
                break;
            } else {
                m.insert({nums[i], i});
            }
        }
        
        return result;
    }
};

void print(std::vector<int> const &input)
{
    std::copy(input.begin(),input.end(),std::ostream_iterator<int>(std::cout, " "));
}


int main()
{
    vector<int> lista = {2,7,11,15};
    Solution* solution = new Solution();
   
    print(solution->twoSum(lista,9));
    





    return 0;
}
