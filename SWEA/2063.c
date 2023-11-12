#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	
    int N;
    int arr[199];
    int temp;

    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << arr[N / 2] << endl;

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}