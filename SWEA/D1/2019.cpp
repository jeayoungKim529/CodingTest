#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    int num;

    cin >> n;
    num = 1;
    for (int i = 0; i <= n; i++)
    {
        cout << num << ' ';
        num *= 2;
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}