#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		string s;
		int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int year;
		int month;
		int day;

		cin >> s;
		year = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + (s[3] - '0');
		month = (s[4] - '0') * 10 + (s[5] - '0');
		day = (s[6] - '0') * 10 + (s[7] - '0');
		if (year >= 0)
			if (0 < month && month < 13)
				if (0 < day && day < arr[month])
				{
					cout << '#' << test_case << ' ' << year << '/' << month << '/' << day << endl;
					continue;
				}
		cout << "-1" << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
