//#include "ThreeSum.h"
//
//vector<vector<int>> ThreeSum::threeSum(vector<int>& nums)
//{
//	vector<vector<int>> result;
//	int vecSize = int(nums.size);
//	if (vecSize <= 2) return result;
//	
//	int possibleSize = vecSize - 2;
//	sort(nums.begin(), nums.end());
//
//	for (int index = 0; index < possibleSize; index++) {
//		int intNow = nums[index];
//		if (intNow > 0) break;
//		int negativeNow = 0 - intNow;
//		int lo = index + 1;
//		int hi = vecSize - 1;
//		while (lo < hi) {
//			int intLo = nums[lo];
//			int intHi = nums[hi];
//			if (intLo + intHi == negativeNow) {
//				vector<int> tempVec{ intNow,intLo,intHi };
//				result.push_back(tempVec);
//				while (lo < hi && nums[lo] == intLo)
//				{
//					lo++;
//				}
//				while (lo < hi && nums[hi] == intHi) {
//					hi--;
//				}
//			}
//			else if (intLo + intHi < negativeNow) {
//				lo++;
//			}
//			else if (intLo + intHi > negativeNow) {
//				hi--;
//			}
//		}
//		while (index + 1 < possibleSize && nums[index] == nums[index + 1]) {
//			index++;
//		}
//	}
//
//	return result;
//}
//
//int main() {
//
//	getchar();
//	return 0;
//}
