#include <iostream>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n / 2; i++)
    {
        temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << A[i]<<endl;
}