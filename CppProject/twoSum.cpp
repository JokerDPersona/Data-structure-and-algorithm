#include "twoSum.h"

vector<int> twoSum::twosum(vector<int>& nums, int target)
{
	unordered_map<int, int> m;
	for (int i = 0; i < nums.size(); ++i) {
		m[nums[i]] = i;
	}
	for (int i = 0; i < nums.size(); ++i) {
		if (m.find(target - nums[i]) != m.end() && m[target - nums[i]] != i) {
			return { i,m[target - nums[i]] };
		}
	}
	return {};
}

int main() {
	twoSum ts;
	vector<int> temp;
	temp.push_back(2);
	temp.push_back(8);
	temp.push_back(3);
	temp.push_back(1);
	temp.push_back(6);
	temp.push_back(7);
	temp.push_back(9);
	temp.push_back(4);
	for (size_t i = 0; i < temp.size(); ++i)
	{
		cout << "目前拥有的元素:" << temp[i] << endl;
	}
	auto num = ts.twosum(temp,6);
	cout << endl;
	for (size_t i = 0; i < num.size(); ++i)
	{
		cout << "能与之组合的元素:" << num[i] << endl;
	}
	getchar();
	return 0;
}
