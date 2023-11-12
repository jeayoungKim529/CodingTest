#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int N;
	int result;

	cin >> N;
	result = 0;
	while (N > 0)
	{
		result += N % 10;
		N /= 10;
	}
	cout << result << endl;

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}