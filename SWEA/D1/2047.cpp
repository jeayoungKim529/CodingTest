#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	string s;

    cin >> s;
    for(int i = 0; i < s.length(); i++)
        s[i] = toupper(s[i]);
    cout << s;
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}