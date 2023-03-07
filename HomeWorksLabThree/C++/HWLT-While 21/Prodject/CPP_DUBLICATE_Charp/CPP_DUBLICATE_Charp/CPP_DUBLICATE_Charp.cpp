/*. Дано целое число N (> 0). С помощью операций деления нацело
и взятия остатка от деления определить, имеются ли в записи числа N
нечетные цифры. Если имеются, то вывести TRUE, если нет — вывести
FALSE.
*/
#include <iostream>;
#include <Windows.h>;
using namespace std;

int main(void)
{
    SetConsoleCP(1251);           //lg Ukraine
    SetConsoleOutputCP(1251);     //lg Ukraine

    cout << "Будь ласка ведіть значення  " << "N" << endl;
    int N; cin >> N; bool StopWhileRestarted = false;
    
    while (N > 0)
    {
        int digit = N % 10;
        if (digit %2 != 0)
        {
            cout << "TRUE" << endl;
            StopWhileRestarted = true; break;  
        }
        else
        {
            cout << "FALSE" << endl;
            StopWhileRestarted = true; break;
        }
    }
}