/*#include <iostream>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int sum = 0;

    for (i = 0; i < 10; i++)
    {
        sum = sum + array[i];
    }
    cout << "Sum is:" << sum;
    return 0;
};*/

/*Write a Program to create a array and accept array elements from user, accept a number from user and display message that the number entered by user is present in array with location*/

#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int n;
    int i = 0;

    cout << "Enter The Size of The Array:";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter The " << i + 1 << " element of the Array:";
        cin >> arr[i];
    }
    char ch;
    cout << "Do You Want to Search For The Element:(Y/N)";
    cin >> ch;
    int x;
    if (ch == y || Y)
    {
        cout << "Enter The Number: ";
        cin >> x;
        if (x == arr[i])
        {
            cout << "Number Found at " << i << " Position";
        }
    }
    else
    {
        break;
    }

    return 0;
};
