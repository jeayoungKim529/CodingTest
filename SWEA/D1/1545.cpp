#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;

    cin >> n;
    for (; n >= 0; n--)
        cout << n << ' ';
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}