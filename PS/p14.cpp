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

bool IsIsScalarMatrix(int Matrix[3][3], short rows, short cols)
{
    int ScalarNumber = Matrix[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j && Matrix[i][j] != ScalarNumber)
            {
                return 0;
            }
            else if (i != j && Matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3] = {{9, 0, 0}, {0, 9, 0}, {0, 0, 7}};
    // FillMatrixOfRandom(Matrix1, 3, 3);

    PrintMatrix(Matrix1, 3, 3);

    if (IsIsScalarMatrix(Matrix1, 3, 3))
        cout << " Its Scalar";
    else
        cout << "Its Not Scalar ";
    return 0;
}