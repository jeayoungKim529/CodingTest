#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int P;
    int K;

    cin >> P >> K;
    if (P == K)
        cout << '0';
    else if (P > K)
        cout << P - K + 1;
    else
        cout << (1000 - K + P);
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}