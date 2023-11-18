#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N;

    cin >> N;
    for (int i = 0; i < N; i++)
        cout << '#';
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}