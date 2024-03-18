#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];

    for (i = 0; i < 5; i++)
    {
        cout << i << ". " << "Nama saya adalah = " << "Zhilal Fadiah Krisna" << endl;
    }

    for (i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai = ";
        cin >> arr[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "Element ke - " << i << " = " << arr[i] << endl;
    }
}