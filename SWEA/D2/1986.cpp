#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
     
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        int N;
        int result;
 
        cin >> N;
        result = 1;
        if (N == 1)
            cout << '#' << test_case << ' ' << 1 << endl;
        else
        {
            for(int i = 2; i < N + 1; i++)
            {
                if(i % 2 == 0)
                    result -= i;
                else
                    result += i;
            }
            cout << '#' << test_case << ' ' << result << endl;
        }
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}