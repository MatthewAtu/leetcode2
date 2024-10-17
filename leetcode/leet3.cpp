/* convert roman numerals to integer
1 - store the the roman numerals and their values in an unordered_map
2 - the final total
3 - the for loop loops through each element in the string
4 - if statement that checks to see if the the value of the char at position i is less than that of i + 1 
5 - if the condition of 4 is met then subtract the value of the char instead of adding it
6 - otherwise add the value
*/
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> n;//1
    n['I'] = 1;
    n['V'] = 5;
    n['X'] = 10;
    n['L'] = 50;
    n['C'] = 100;
    n['D'] = 500;
    n['M'] = 1000;

    int thenumber = 0;//2
    for (int i = 0; i < s.length(); i++) {//3
        if (n[s[i]] < n[s[i+1]]) {//4
            thenumber -= n[s[i]];//5
            }
        else {
            thenumber += n[s[i]];//6
        }
        }
        
return thenumber;
    }
    

  /* int main(){

    cout << romanToInt("III")<< '\n' << romanToInt("LVIII") << '\n' << romanToInt("MCMXCIV") ;

}*/