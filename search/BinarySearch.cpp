#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (key < arr[mid])
            return BinarySearch(arr, low, mid - 1, key);
        else
            return BinarySearch(arr, mid + 1, high, key);
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 1;
    int low = 0, high = sizeof(arr) / arr[0];
    int idx = BinarySearch(arr, low, high - 1, key);
    if (idx == -1)
        cout << "Key is not Found\n";
    else
        cout << "Key is Found at index " << idx << "\n";
    return 0;
}