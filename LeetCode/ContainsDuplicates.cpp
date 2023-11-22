#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> s;
        // This provides O(1) average time complexity for insertion and lookup operations.
        // Stores unique items and duplicate items are automatically eliminated
        // Implemented as a hash table, which is optimized for insertion, deletion, and lookup operations.
        // Doesn't use key-value pairs, which would be used in std::unordered_map

        for(int i = 0; i < nums.size(); i++){
            if (s.find(nums[i]) != s.end()) {
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};

int main(){

    return 0;
}