#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
     
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        string s;
        int flag;
        int length;
 
        cin >> s;
        flag = 1;
        length = s.length();
        for(int i = 0; i < length / 2; i++)
        {
            if(s[i] != s[length - 1 - i])
                flag = 0;
        }
        cout << '#' << test_case << ' ' << flag << endl;
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}