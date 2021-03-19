#include <iostream>
#include <string>
#include <vector>

int main()
{
	int numArrays = 0;
	int numQueries = 0;


	std::cin >> numArrays >> numQueries;
	std::cin.clear();

	std::vector<std::vector<int>> arrayContainer;
	std::vector<std::vector<int>> queryContainer;
	int arraysLoaded = 0;
	int queriesLoaded = 0;
	int servedQueries = 0;

	while (arraysLoaded != numArrays)
	{
		std::vector<int> singleArray;
		char arrayLenChar = '0';
		std::cin >> arrayLenChar;
		int arrayLenInt = int(arrayLenChar) - 48;
		int elementsLoaded = 0;
		std::string elementInput = "0";

		while (elementsLoaded != arrayLenInt)
		{
			std::cin >> elementInput;
			singleArray.push_back(std::stoi(elementInput));
			elementsLoaded++;
		}
		arrayLenInt = 0;
		elementsLoaded = 0;
		arrayContainer.push_back(singleArray);
		arraysLoaded++;
	}
	
	while (queriesLoaded != numQueries)
	{
		std::vector<int> singleQuery;
		std::string array;
		std::string element;

		std::cin >> array;
		std::cin >> element;

		singleQuery.push_back(std::stoi(array));
		singleQuery.push_back(std::stoi(element));

		queryContainer.push_back(singleQuery);
		queriesLoaded++;
	}

	while (servedQueries != numQueries)
	{
		int arrayToPrint = queryContainer[servedQueries][0];
		int elementToPrint = queryContainer[servedQueries][1];

		std::cout << arrayContainer[arrayToPrint][elementToPrint] << std::endl;

		servedQueries++;
	}

	




	

	return 999;
}

//


/*
10 10
3 916135 272188 794963
3 178997 502468 671251
1 122266
3 223511 996043 990104
3 319694 335208 200789
2 867809 273793
1 925358
1 71140
1 862238
1 994309
6 0
5 0
5 0
7 0
5 0
6 0
3 2
3 1
0 0
9 0
*/