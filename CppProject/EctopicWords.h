#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

class EctopicWords
{
private:
	//建立hashmap
	unordered_map<string, int> hashmap;
	unordered_map<string, vector<string>> hashmap1;
public:
	//题目给的函数结构
	vector<vector<string>> groupAnagrams(vector<string>& strs);
};

