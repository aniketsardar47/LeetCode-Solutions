#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;
}

int main() {
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    std::cout << "The target " << target << " should be inserted at index: " << searchInsert(nums, target) << std::endl;

    target = 2;
    std::cout << "The target " << target << " should be inserted at index: " << searchInsert(nums, target) << std::endl;

    target = 7;
    std::cout << "The target " << target << " should be inserted at index: " << searchInsert(nums, target) << std::endl;

    target = 0;
    std::cout << "The target " << target << " should be inserted at index: " << searchInsert(nums, target) << std::endl;

    return 0;
}
