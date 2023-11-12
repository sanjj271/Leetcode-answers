class Solution {
public:
    int findMin(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        cout<<nums[mid]<<endl;
        cout<<nums[left]<<" "<<nums[right]<<endl;
        if (nums[mid] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return nums[left];
}
};