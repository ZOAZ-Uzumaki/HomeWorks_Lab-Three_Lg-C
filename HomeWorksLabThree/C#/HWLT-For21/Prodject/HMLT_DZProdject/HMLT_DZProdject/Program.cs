//For21.

/* Дано целое число N (> 0). Используя один цикл, найти сумму
1 + 1 / (1!) + 1 / (2!) + 1 / (3!) + . . . + 1 / (N!)
Цикл с параметром 27
(выражение N! — N–факториал — обозначает произведение всех целых
чисел от 1 до N: N! = 1·2·. . .·N). Полученное число является приближенным значением константы e = exp(1).
*/

Console.OutputEncoding = System.Text.Encoding.Default; //lg Ukraine

Console.WriteLine("Задайте ціле число - " + "N" );
int N = Convert.ToInt16( Console.ReadLine() ); //водим N;

double factorial = 1.0;
double suma = 1.0;

for( int i = 1; i <= N; i++)
{
    factorial*= i; // Обчислюємо факторіал.

    double slogaemoe = 1.0 / factorial;  suma += slogaemoe;
}

Console.WriteLine("Результат- "+ suma );

Console.ReadKey();