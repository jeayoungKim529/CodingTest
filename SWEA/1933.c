#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            cout << i << ' ';
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}