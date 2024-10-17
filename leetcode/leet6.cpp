#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> strs) {
	string longestprefix = "";
	int k = 0;
	string basestr = ""; 

	for (int i = 0; i < strs.size() - 1; i++) {
		if (strs[i].length() >= strs[i + 1].length()) {
			for (int j = 0; j < strs[i + 1].length(); j++) {
				if (strs[i + 1].at(j) == strs[i].at(k)) {
					longestprefix += strs[i].at(j);
					k++;
				}
			}
		}
		/*else if (strs[i].length() < strs[i + 1].length()) {
			for (int j = 0; j < strs[i + 1].length(); j++) {
				if (strs[i + 1].at(j) == strs[i ].at(k) && j < strs[i].length()) {
					longestprefix += strs[i + 1].at(j);
					k++;
				}
			}
		}*/
	}
	return longestprefix;
}

int main() {
	vector<string> strs = {"flower" ,"flow","flight" };

	cout << longestCommonPrefix(strs);
}