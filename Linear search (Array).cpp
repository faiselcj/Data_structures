// Linear Search Implementation in C++
// This function finds the smallest index where the target appears in the given array nums.
// If the target is not found, it returns -1.

#include <vector>
using namespace std;

class Solution {
public:
    // Function to perform linear search
    int linearSearch(vector<int>& nums, int target) {
        // Iterate through each element in the array
        for (int i = 0; i < nums.size(); i++) {
            // Check if the current element matches the target
            if (nums[i] == target) {
                // Return the current index if the target is found
                return i;
            }
        }
        // If the target is not found, return -1
        return -1;
    }
};

// Test cases to validate the solution
// Example usage:
#include <iostream>

int main() {
    Solution solution;

    // Test Case 1
    vector<int> nums1 = {2, 3, 4, 5, 3};
    int target1 = 3;
    cout << "Test Case 1 Output: " << solution.linearSearch(nums1, target1) << endl; // Expected Output: 1

    // Test Case 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    int target2 = 6;
    cout << "Test Case 2 Output: " << solution.linearSearch(nums2, target2) << endl; // Expected Output: -1

    return 0;
}

/*
Explanation:
1. The `linearSearch` function takes a vector of integers `nums` and an integer `target` as inputs.
2. It iterates through each element in the `nums` array using a for loop.
3. If the current element matches the target, the function returns the index of that element immediately.
4. If the loop completes without finding the target, the function returns -1.
5. The main function demonstrates the usage of `linearSearch` with two test cases.
*/
