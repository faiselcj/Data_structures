class Solution {
public:
    // Function to merge two sorted subarrays
    void merge(vector<int> &arr, int low, int mid, int high) {

        vector<int> temp; // Temporary array to store merged elements
        int left = low;   // Pointer for the left subarray
        int right = mid + 1; // Pointer for the right subarray

        // Merge the two subarrays into temp
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]); // Add smaller element to temp
                left++; // Move left pointer
            } else {
                temp.push_back(arr[right]); // Add smaller element to temp
                right++; // Move right pointer
            }
        }

        // Add remaining elements from the left subarray (if any)
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Add remaining elements from the right subarray (if any)
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy the merged elements back to the original array
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

    // Recursive function to divide the array and sort
    void Ms(vector<int> &arr, int low, int high) {
        if (low >= high)
            return; // Base case: a single element or empty subarray

        int mid = (low + high) / 2; // Find the middle index

        // Recursively sort the left subarray
        Ms(arr, low, mid);

        // Recursively sort the right subarray
        Ms(arr, mid + 1, high);

        // Merge the two sorted subarrays
        merge(arr, low, mid, high);
    }

    // Function to initiate merge sort
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size(); // Get the size of the array
        Ms(nums, 0, n - 1); // Sort the entire array using Ms function
        return nums; // Return the sorted array
    }
};
