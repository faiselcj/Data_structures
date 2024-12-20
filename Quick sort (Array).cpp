class Solution { // Defines the Solution class.
public:

// Function to partition the array around a pivot
int partition(vector<int>& arr, int low, int high) {

    int pivot = arr[low]; // Select the first element as the pivot.
    int Start_array = low;          // Initialize pointer `Start_array` to the start of the array.
    int End_array = high;         // Initialize pointer `j` to the end of the array.

    // Loop until pointers cross each other
    while (Start_array < End_array) {
        // Move `Start_array` to the right while elements are less than or equal to the pivot
        while (arr[Start_array] <= pivot && Start_array <= high - 1) {
            Start_array++;
        }
        // Move `j` to the left while elements are greater than the pivot
        while (arr[End_array] > pivot && End_array >= low + 1) {
            End_array--;
        }
        // Swap elements at `Start_array` and `End_array` if `Start_array` is still less than `End_array`
        if (Start_array < End_array) swap(arr[Start_array], arr[End_array]);
    }
    // Swap the pivot element with the element at pointer `j`
    swap(arr[low], arr[End_array]);
    return End_array; // Return the index of the pivot after partitioning.
}

// Helper function to perform recursive quicksort
void quickSortHelper(vector<int>& arr, int low, int high) {

    if (low < high) { // Base condition: Continue only if the subarray has more than one element.
        int pIndex = partition(arr, low, high); // Partition the array and get the pivot index.
        
        // Recursively sort the elements before the pivot
        quickSortHelper(arr, low, pIndex - 1);
        // Recursively sort the elements after the pivot
        quickSortHelper(arr, pIndex + 1, high);
    }
}

// Main function to be called externally to sort the array
vector<int> quickSort(vector<int>& nums) {

    int n = nums.size(); // Get the size of the input array.
    quickSortHelper(nums, 0, n - 1); // Call the helper function with the full range of the array.

    return nums; // Return the sorted array.
}
};
