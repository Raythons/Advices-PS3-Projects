#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;
int RandomNumber(int From, int To)
{
    int RandomNum = rand() % (From - To + 1) + From;
    return RandomNum;
}

void FillMatrixOfRandom(int Matrix[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Matrix[i][j] = RandomNumber(0, 100);
        }
    }
}
int CountNumberInMatrix(int Matrix[3][3], short row, short col)
{
    int Number = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Number++;
        }
    }
    return Number;
}

void PrintMatrix(int Matrix[3][3], short Length1, short Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        for (int j = 0; j < Length2; j++)
        {
            printf(" %0*d", 2, Matrix[i][j]);
            // cout << setw(3) << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool CheckIfNumberInMatrix(int Matrix[3][3], int NumberToCheck, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (Matrix[i][j] == NumberToCheck)
            {
                return true;
            }
        }
    }
    return false;
}

void FibonacciSeriesUsingRecursion(short Number, int FebNumber, int Prev1, int Prev2)
{
    if (Prev1 == 0)
    {
        cout << " 1  ";
    }
    if (Number == 1)
    {
        return;
    }
    FebNumber = Prev2 + Prev1;
    Prev1 = Prev2;
    Prev2 = FebNumber;
    cout << FebNumber << "   ";
    FibonacciSeriesUsingRecursion(Number - 1, FebNumber, Prev1, Prev2);
}
int main()
{
    srand((unsigned)time(NULL));
    // int Matrix1[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};
    // FillMatrixOfRandom(Matrix1, 3, 3);
    FibonacciSeriesUsingRecursion(11, 0, 0, 1);
    return 0;
}
