//#include "EctopicWords.h"
//
//vector<vector<string>> EctopicWords::groupAnagrams(vector<string>& strs)
//{
//	//����ԭ���������ݵ���������
//	//����λ�ʽ�������õ���ͬ����ĸ
//	//Ȼ�󽫶Ա�һ�µ�������ֵ��¼��hashmap
//	//������hashmap��ȡ�������Ĵ�
//	vector<vector<string>> arr;
//
//	/*int sub = 0;
//	string temp;
//	for (auto str : strs) {
//		temp = str;
//		sort(temp.begin(), temp.end());
//		if (hashmap.count(temp)) {
//			arr[hashmap[temp]].push_back(str);
//		}
//		else {
//			vector<string> vec(1, str);
//			arr.push_back(vec);
//			hashmap[temp] = sub++;
//		}
//	}*/
//
//	for (auto& s : strs) {
//		string str = s;
//		sort(s.begin(), s.end());
//		hashmap1[s].emplace_back(str);
//	}
//	for (auto& s : hashmap1) {
//		arr.emplace_back(s.second);
//	}
//
//	return arr;
//}
//
//int main() {
//	
//	//vector<string> starr;
//	//string str1("eat"), str2("tea"), str3("tan"), str4("ate"), str5("nat"), str6("bat");
//	//string str("str");
//	/*stringstream str1("eat"), str2("tea"), str3("tan"), str4("ate"), str5("nat"), str6("bat");
//	stringstream str("str");
//	for (int i = 0; i < 6; ++i) {
//		str << i;
//		string tempstr = str.str();
//		starr.push_back(tempstr);
//	}
//	for (auto& s : starr) {
//		cout << "���µ��в�:" << s << endl;
//	}*/
//
//	EctopicWords ew;
//	vector<string> arr({
//		"eat",
//		"tea",
//		"tan",
//		"ate",
//		"nat",
//		"bat"
//		});
//	for (auto s : arr) {
//		cout << "δ����ʱ:" << endl;
//		cout << "[";
//		cout << s << ",";
//		cout << "]\n";
//	}
//	cout << endl;
//	for (auto& v : ew.groupAnagrams(arr)) {
//		cout << "[";
//		for (auto s : v) {
//			cout << s << ",";
//		}
//		cout << "]\n";
//	}
//	
//	getchar();
//	return 0;
//}
