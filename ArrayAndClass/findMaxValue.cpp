#include<iostream>

int findMaxValue(int array[], int len)
{
	int maxVal = array[0];
	for(int i = 1; i <= len; ++i){
		if(maxVal < array[i]){
			maxVal = array[i];
		}
	}

	return maxVal;
}

int main()
{
	int maxVal;
	int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	maxVal = findMaxValue(values, 10);
	std::cout << maxVal;

	return 0;
}

