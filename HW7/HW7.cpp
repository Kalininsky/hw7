#include <iostream>
#include "MyLib.h"
#include <fstream>

#define TRUE_OR_FALSE(entered_number, last_number) (entered_number >= 0 && entered_number < last_number)
#define SwapINT(a, b)int temp = a; a = b; b = temp;

using namespace std;

void DZ1()
{
    cout << "//=================================================[DZ_1,5]==================================================//\n\n";
}
void DZ2()
{
    cout << "\n//===================================================[DZ2]===================================================//\n\n";
}
void DZ3()
{
    cout << "\n//===================================================[DZ3]===================================================//\n\n";
}

void END()
{
    cout << "\n\n//===================================================[END]===================================================//\n\n";
}

#pragma pack(push, 1)
struct PERSONAL
{
    char FullName[255];
    char Street[255];
    short House;
    short Flat;
    char Phone;
};
#pragma pack(pop)


int main()
{
    setlocale(LC_ALL, "Rus");
    {
        // task 1
        DZ1();
        float* M = MyLib::CreateArray(10);
        MyLib::count(M, 10);
        MyLib::Print(M, 10);

    }

    {
        // task 2
        DZ2();

        int entered_number;
        const int last_number = 3434;
        cout << boolalpha;
        cout << "Enter the number you want to check: " << endl;
        cin >> entered_number;
        bool result = TRUE_OR_FALSE(entered_number, last_number);
        cout << "Your result: " << result << endl;
    }

    {
        // task 3
        DZ3();

        int* Array;
        int n;
        cout << "array size ";
        cin >> n;
        Array = new int[n];

        for (int i = 0; i < n; i++)
        {
            cout << "Array[" << i << "] = ";
            cin >> Array[i];
        }

        int temp;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (Array[j] > Array[j + 1])
                {
                    SwapINT(Array[j], Array[j + 1])
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << Array[i] << " ";
        }
        cout << endl;
        delete[] Array;
        END();
    }

}