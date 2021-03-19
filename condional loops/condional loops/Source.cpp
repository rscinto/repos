#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>  
using namespace std;


int main() 
{
	int numArrays = 0;
	int numQueries = 0;
	vector<vector<int>> arrayContainer;
	vector<string> elementInput;

	cin >> numArrays >> numQueries;
	cin.clear();

	for (int i = 0; i <= numArrays; i++)
	{
		string raw;
		while (getline(cin, raw, ' '))
		{
			elementInput.push_back(raw);
		}
		
	}

	for (int i = 0; i < numArrays; i++)
	{
		vector<int> arrayInput;
		string elements = elementInput[i+1];
		
		//start at 2 and skip the 0th element
		for (int j = 2; j < elements.length(); j=j+2)
		{
			//cout << elements[j] << endl;
			char holder = elements[j];
			int converter = (int)holder - 48;
			arrayInput.push_back(converter);
		}
		
		arrayContainer.push_back(arrayInput);
		cin.clear();
	}

	//vector of ordered pairs
	//queries will be loaded into the vector where
	//the ordered pairs are (specific array, specific element)
	std::vector<std::pair<int, int>> queries;

	
	for (int i = 0; i < numQueries; i++)
	{
		int chosenArray;
		int chosenElement;

		std::cin >> chosenArray;
		std::cin >> chosenElement;

		//std::cout << "Array: " << chosenArray << " Element: " << chosenElement << std::endl;

		std::pair<int, int> input = { chosenArray,chosenElement };
		queries.push_back(input);

		//std::pair<int, int> output = queries[i];
		//std::cout << output.first << " " << output.second;
	}

	
	for (int i = 0; i < numQueries; i++)
	{
		int chosenArray = queries[i].first;
		int chosenElement = queries[i].second;

		std::cout << arrayContainer[chosenArray][chosenElement] << std::endl;
	}
	
	return 0;
}

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