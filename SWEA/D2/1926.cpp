#include<iostream>
 
using namespace std;
 
int check_num(int n)
{
    int arr[4];
    int cnt = 0;
 
    for(int j = 3; j > 0; j--)
    {
        arr[j] = n % 10;
        n /= 10;
    }
    for(int i = 0; i < 4; i++)
        if (arr[i] == 3 || arr[i] == 6 || arr[i] == 9)
            cnt++;
    return (cnt);
}
 
int main(int argc, char** argv)
{
    int N;
    int arr[4];
    int k;
 
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        k = check_num(i);
        if (k == 0)
            cout << i;
        else
            for(int j = 0; j < k; j++)
                cout << '-';
        cout << ' ';
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}