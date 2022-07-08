#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int k = 0; k < n; k++)
    {
        
        for (int i = 1; i < n; i++)
        {
            if (A[i] < A[i - 1])
            {
                int temp = A[i - 1];
                A[i - 1] = A[i];
                A[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
}