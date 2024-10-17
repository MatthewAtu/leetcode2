/*buy and sell stocks
1 -  set the buy price to the first element in the array
2 -  check to see if any elements in the array are less than the buy price if so then set the new buy price to that
3 -  every loop set profit to the higher value between the current set profit and the diffrence between the current price in the array and the buy price
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int maxProfit(vector<int>& prices) {
	int buyprice = 0;
	int profit = 0;
	buyprice = prices[0];//1
	for (int i = 1; i < prices.size(); i++) {
		if (buyprice > prices[i]) {//2
			buyprice = prices[i];
		}
		profit = max(profit, prices[i] - buyprice);//3
	}

	return profit;
}

/*int main() {
	vector<int> prices = { 7,1,5,3,6,4 };
	vector<int> prices2 = { 7,6,4,3,1 };
	cout << maxProfit(prices) << '\n' << maxProfit(prices2);
}*/