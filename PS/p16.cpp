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

int CountNumberInMatrix(int Matrix[3][3], int Number, short rows, short cols)
{
    int Count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (Matrix[i][j] == Number)
            {
                Count++;
            }
        }
    }
    return Count;
}

bool IsSparseMatrix(int Matrix[3][3], int rows, int cols)
{
    int MatrixSize = rows * cols;
    return (CountNumberInMatrix(Matrix, 0, rows, cols) >= MatrixSize / 2);
}
int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3] = {{9, 0, 0}, {0, 9, 9}, {9, 0, 9}};
    // FillMatrixOfRandom(Matrix1, 3, 3);

    PrintMatrix(Matrix1, 3, 3);
    cout << IsSparseMatrix(Matrix1, 3, 3);
    return 0;
}