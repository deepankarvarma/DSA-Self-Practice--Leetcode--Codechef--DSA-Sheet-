#include <bits/stdc++.h>
using namespace std;
int findmin(int A[], int n)
{
    int temp = A[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (temp > A[i])
        {
            temp = A[i];
            count = i;
        }
    }
    return count;
}
int findmax(int A[], int n, int a)
{
    int temp = A[0];
    int count = 0;
    for (int i = a; i < n - 1; i++)
    {
        if (A[i + 1] > A[i])
        {
            temp = A[i + 1];
            count = i + 1;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    if (findmin(A, n) != n - 1)
    {
        int a = findmin(A, n);

        cout << A[findmax(A, n, a)] - A[findmin(A, n)];
    }
    else
        cout << "0" << endl;
}