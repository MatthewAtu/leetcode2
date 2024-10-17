/*

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> strs) {
	
	string basestr = strs[0];
	int baselen = basestr.length();
	string longestprefix = basestr.substr(0, baselen);
	for (int i = 1; i < strs.size(); i++) {
		//cout << strs[i];
		while (baselen > strs[i].length() || longestprefix != strs[i].substr(0, baselen)) {
			baselen--;
			if (baselen == 0) {
				return "";
			}
			longestprefix = basestr.substr(0, baselen);
		}
	}
	return longestprefix;
}

int main() {
	vector<string> strs = { "dog","racecar","car" };

	cout << longestCommonPrefix(strs);
}