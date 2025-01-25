class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Using Floyd's Tortoise and Hare (Cycle Detection)
    int slow = nums[0];
    int fast = nums[0];

    // Step 1: Detect cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Step 2: Find the entrance to the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
    }
};