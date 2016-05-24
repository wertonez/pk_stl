#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>  
#include <time.h>
#include <vector>
#include <list>
#include <fstream>
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
	} else
		return -1;
}

void wypisz_od_przodu(list<string> l)
{
	cout << "Wypisujemy od przodu: " << endl;
	list<string>::iterator it;
	for (it = l.begin(); it != l.end(); ++it)
		cout << *it << endl;
}

void wypisz_od_tylu(list<string> l)
{
	cout << "Wypisujemy od tylu: " << endl;
	list<string>::reverse_iterator it;
	for (it = l.rbegin(); it != l.rend(); ++it)
		cout << *it << endl;
}

void wypisz_od_przodu_ze_skokiem(vector<string> v, int n)
{
	cout << "Wypisujemy ze skokiem: " << n << endl;
	vector<string>::iterator it;

	for (it = v.begin(); it < v.end() - n; )
	{
		it += n;
		cout << *it << endl;
	}
		
}

void wypisz_od_tylu_ze_skokiem(vector<string> v, int n)
{
	cout << "Wypisujemy od tylu ze skokiem: " << n << endl;
	vector<string>::reverse_iterator it;

	for (it = v.rbegin(); it < v.rend() - n; )
	{
		it += n;
		cout << *it << endl;
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


	ifstream file("dane.txt");
	string word;
	vector<string> v;
	list<string> l;

	if (file.is_open())
		while (!file.eof())
		{
			file >> word;
			cout << word << endl;
			v.push_back(word);
			l.push_back(word);
		}
	else
	{
		cout << "Plik nie zostal poprawnio otwarty" << endl;
		return 0;
	}
	
	wypisz_od_przodu(l);
	wypisz_od_tylu(l);
	wypisz_od_przodu_ze_skokiem(v, 5);
	wypisz_od_tylu_ze_skokiem(v, 4);

	system("pause");
	return 0;
}
