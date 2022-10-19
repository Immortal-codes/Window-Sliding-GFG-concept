#include<iostream>
#include<algorithm>

using namespace std;



int maxSum(int arr[], int n, int k)
{
    int sum=INT_MIN;

    for (int i = 0; i < n-k+1; i++)
    {
        int current=0;

        for (int j= 0; i <k; j++)
        {
            current=current+arr[i+j];
        }
        
    }

    return sum;
    
}

int main()
{

    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;

}