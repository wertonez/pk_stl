#include <iostream>
#include <string>
#include <algorithm>

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



	return 0;
}
