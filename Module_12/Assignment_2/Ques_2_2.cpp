#include <iostream>
#include <limits.h>
using namespace std;
string sufix(int i)
{
    if (i == 0)
        return "st";
    else if (i == 1)
        return "nd";
    else if (i == 2)
        return "rd";
    else
        return "th";
}
void size(int *n)
{
    cout << "Enter the size of the array : ";
    cin >> *n;
}
void input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << sufix(i) << " element of the array : ";
        cin >> arr[i];
    }
}
int main()
{

    int n;
    size(&n);
    int arr[n], max_arr[3] = {0, 0, 0};
    input_array(arr, n);
    int max, max2, max3;
    max3 = max = max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max3 = max2;
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
            max3 = arr[i];
    }
    cout << endl
         << "Three largest elements of the array are " << max << "," << max2 << "," << max3;
    return 0;
}