//Segregate 0's 1's in array

#include <iostream>

void segregate_01(int arr[], int n)
{
    int count_0 = 0, count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else
        {
            count_1++;
        }
    }

    for (int i = 0; i < count_0; i++)
    {
        std::cout << "0 ";
    }

    for (int i = count_0; i < n; i++)
    {
        std::cout << "1 ";
    }
}

int main()
{
    int arr[] = {0, 1, 0, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nSegregated array: ";
    segregate_01(arr, n);

    return 0;
}
