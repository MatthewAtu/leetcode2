/*find closest (positive) number to 0
1 - default by setting the closest number to the first number in the array
2 - this if statement checks to see if the absolute value of the closest number is greater than the absolute value of the number that matches the index in the array
    or if the two absolute values are equal and the actual value of the number is greater than the current closest number than closest = j
3 - after the loop is done return the closest value to 0
*/

#include <vector>
#include <iostream>

using namespace std;

int FindClosestNum(vector<int> nums) {// sorts through the array nums and returns the smallest value
	int closest(0);
    for (int i: nums) {
        //take the number and count down to one then count how many positionds it is away from 0        
        closest = i;//1
        for (int j : nums) {
            if (abs(closest) > abs(j) || abs(closest) == abs(j) && j > closest) {//2 checks to return the closest positive value
                closest = j;
            }

        }
        return closest;//3
    }

    return closest;
}

/*int main1() {

	vector<int>nums = { -4,-2,1,4,8 };

	cout << FindClosestNum(nums);

}*/