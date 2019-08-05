#include <iostream>
#include "../std_lib_facilities.h"

class Solution {
public:
	int maxArea(vector<int>& height) {
		int maxArea = 0;
		for (int i = 0; i < height.size(); i++)
		{
			for (int j = i + 1; j < height.size(); j++)
			{
				int smallerHeight;
				if (height[i] < height[j])
					smallerHeight = height[i];
				else
					smallerHeight = height[j];

				int area = smallerHeight * (j - i);
				if (area > maxArea)
					maxArea = area;
			}
		}
		return maxArea;
	}
};


int main()
{
    std::cout << "Hello World!\n";
}

