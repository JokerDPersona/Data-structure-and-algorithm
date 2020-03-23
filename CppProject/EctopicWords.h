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
	//����hashmap
	unordered_map<string, int> hashmap;
	unordered_map<string, vector<string>> hashmap1;
public:
	//��Ŀ���ĺ����ṹ
	vector<vector<string>> groupAnagrams(vector<string>& strs);
};

