#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b;
    int s = -1;
    bool simple, twins = false;

    cout << "Введите меньшее число: ";
    cin >> a;
    cout << "Введите большее число: ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            simple = true;
            for (int j = 3; j < i; j++)
            {
                if (i % j == 0)
                    simple = false;
            }

            if (simple)
            {
                if (s != -1)
                {
                    if (s + 2 == i)
                    {
                        twins = true;
                        cout << s << "-" << i << endl;
                    }
                }
                s = i;
            }
        }
    }

    if (!twins)
        cout << "В введёном диапозоне нет чисел-близнецов." << endl;
}