#include<iostream>

int findMaxValue(int array[][], int w, int h)
{
	int maxVal = INT_MIN;

	for(int j = 0; j < h; ++j)
		for(int i = 0; i < w; ++i){
			if(maxVal < array[h][w])
				maxVal = array[h][w];
		}

	return maxVal;
}

int main()
{
	int maxValue;
	int Array[][5] { 
		{  1,  2,  3,  4,  5 },
		{  6,  7,  8,  9, 10 },
		{ 11, 12, 13, 14, 15 },
		{ 16, 17, 18, 19, 20 }
	}

	maxValue = findMaxValue(Array, 4, 5);
	std::cout << maxVal;
	
	return 0;
}

