#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>  
#include <time.h>
#include <vector>
#define TAB_SIZE 30
using namespace std;

int isPalindrome(string text)
{
	bool _isPalindrome = false;
	_isPalindrome = equal(text.begin(), text.begin() + text.size() / 2, text.rbegin());
	if (_isPalindrome)
	{
		int max = 0;
		int temp;
		for (int i = 0; i < text.size() / 2; i++)
		{
			temp = count(text.begin(), text.end(), text[i]);
			if (max > temp)
				max = temp;
		}

		return max;
	}
}


int main()
{
	srand(time(NULL));

	int tab[TAB_SIZE];
	int tab2[TAB_SIZE/2];

	for (int i = 0; i < TAB_SIZE; i++)
		tab[i] = rand() % 100;

	for (int i = 0; i < TAB_SIZE; i++)
		cout << tab[i] << endl;

	copy(tab, tab + TAB_SIZE / 2, tab2);
	
	cout << endl;

	for (int i = 0; i < TAB_SIZE / 2; i++)
		cout << tab2[i] << endl;

	int random = rand() % 100;

	replace(tab, tab + TAB_SIZE, random, 0);

	cout << endl;
	cout << random << endl << endl;

	for (int i = 0; i < TAB_SIZE; i++)
		cout << tab[i] << endl;

	rotate(tab, tab + TAB_SIZE / 2, tab + TAB_SIZE);

	cout << endl;

	for (int i = 0; i < TAB_SIZE; i++)
		cout << tab[i] << endl;

	swap(tab[0], tab[TAB_SIZE - 1]);

	cout << endl;

	for (int i = 0; i < TAB_SIZE; i++)
		cout << tab[i] << endl;

	sort(tab, tab + TAB_SIZE);

	cout << endl;

	for (int i = 0; i < TAB_SIZE; i++)
		cout << tab[i] << endl;

	sort(tab2, tab2 + TAB_SIZE / 2);

	cout << endl;

	for (int i = 0; i < TAB_SIZE / 2; i++)
		cout << tab2[i] << endl;

	system("pause");
	return 0;
}
