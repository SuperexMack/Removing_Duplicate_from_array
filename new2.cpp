#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> mohit;
    int arr[8] = {1, 1, 1 , 2 ,  3 ,3 , 6 ,7};

    int i = 0;

    while (i < sizeof(arr) / sizeof(arr[0]))
    {

        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
        {

            mohit.push_back(arr[i]);
        }

        i++;
    }

    for (int i : mohit)
    {

        cout << i << " ";
    }
}