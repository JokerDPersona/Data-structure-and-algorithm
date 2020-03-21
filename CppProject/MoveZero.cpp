//#include "MoveZero.h"
//
//void MoveZero::moveZero(vector<int>& nums)
//{
//	for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); ++cur) {
//		if (nums[cur] != 0) {
//			swap(nums[lastNonZeroFoundAt++], nums[cur]);
//		}
//	}
//}
//
//void MoveZero::moveZeros(vector<int>& nums)
//{
//	int lastNonZeroFoundAt = 0;
//	for (int i = 0; i < nums.size(); ++i) {
//		if (nums[i] != 0) {
//			nums[lastNonZeroFoundAt++] = nums[i];
//		}
//	}
//
//	for (int i = lastNonZeroFoundAt; i < nums.size(); ++i) {
//		nums[i] = 0;
//	}
//
//}
