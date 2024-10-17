/*is subsequent 
1 - loop through the string t and and see if any chars match with the chars in string s 
2 - j counts the amount of matches that string t has with string s
3 - if the amount of matches is equal to the size of string s then s is subsequent to t
*/


#include <string>
#include <iostream>
#include <cstring>

using namespace std;

bool isSubsequence(string s, string t) {
	int j = 0;//2
	for (int i = 0; i < t.size(); i++) {
		if (t[i] == s[j]) { //1
			j++;
		 }
	}
	if (j == s.size()) {//3
		return true;
	}
	
	return false;
 }


/*int main() {
	cout << isSubsequence("abc", "ahbgdc") << '\n' << isSubsequence("axc", "ahbgdc");
	return 0;
}*/