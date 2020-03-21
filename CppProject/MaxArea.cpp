//#include "MaxArea.h"
//
//
//int MaxArea::maxArea(vector<int>& height)
//{
//	int res = 0;
//	int i = 0;
//	int j = height.size() - 1;
//	while (i < j) {
//		int area = (j - i) * min(height[i], height[j]);
//		res = max(res, area);
//		if (height[i] < height[j]) {
//			i++;
//		}
//		else {
//			j--;
//		}
//	}
//	return res;
//}
