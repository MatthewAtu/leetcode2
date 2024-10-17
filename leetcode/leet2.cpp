/* merge string alternitivly
merges 2 strings together alternating each letter
1 - this is the final fully merged word 
2 - when the first string is larger than the second one then the for loop will continue as long as 
	i is less than the length of the longer string	
3 - this will add a char from the first string into the final merged one
4 - inside this loop(2), there is an if statement that checks if i is less than the length of the smaller string where 
5 - if the condition is met it adds a character from the smaller string to the final merged word
6 - this loop has a similar concept to the first loop(2) where, if the second string is larger than the first one then the loop continues
	while i is less than the length of the longer string
7 - the second loop(6) differs here where the smaller first string is added first before the larger second one(8,9)
*/

#include <iostream>
#include <string>

using namespace std;

string mergeAlternitivly(string word1, string word2) {
	string mergedword = "";//1
	if (word1.length() >= word2.length()) {//2
		for (int i = 0; i <= word1.length() - 1; i++) {
			mergedword += word1.at(i);//3
			if (i < word2.length()) {//4
				mergedword += word2.at(i);//5
			}
		}
	}
	else if (word2.length() >= word1.length()){//6
		for (int i = 0; i <= word2.length() - 1; i++) {
			if (i < word1.length()) {//7
				mergedword += word1.at(i);//8
			}
			mergedword += word2.at(i);//9
		}
	}
	return mergedword;
}


/*int main2() {

	cout << mergeAlternitivly("ab", "pqrs") << '\n' << mergeAlternitivly("abcd", "pq") << '\n' << mergeAlternitivly("abc", "pqr");
}*/