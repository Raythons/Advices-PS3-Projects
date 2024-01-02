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
int SumOfMatrixNumbers(int Matrix[3][3], short row, short col)
{
    int Sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Sum += Matrix[i][j];
        }
    }
    return Sum;
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

bool IsTypicalMatrix(int Matrix1[3][3], int Matrix2[3][3], short Length1, short Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        for (int j = 0; j < Length2; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3];
    int Matrix2[3][3];
    FillMatrixOfRandom(Matrix1, 3, 3);
    FillMatrixOfRandom(Matrix2, 3, 3);

    PrintMatrix(Matrix1, 3, 3);
    PrintMatrix(Matrix2, 3, 3);
    cout << "*****************************\n";
    cout << SumOfMatrixNumbers(Matrix1, 3, 3);
    cout << "\n*****************************\n";
    cout << SumOfMatrixNumbers(Matrix2, 3, 3);
    cout << "\n*****************************\n";
    if (IsTypicalMatrix(Matrix1, Matrix1, 3, 3))
        cout << " Its Typical";
    else
        cout << "Its Not Typical ";
    return 0;
}