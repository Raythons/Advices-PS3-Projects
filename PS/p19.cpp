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
void PrintMinimumMaximum(int Min, int Max)
{
    cout << "Min is : " << Min << endl;
    cout << "Max Is : " << Max << endl;
}

void GetMaximumMinimumMatrix(int Matrix[3][3], int rows, int cols)
{
    int Minimum, Maximum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (Matrix[i][j] < Minimum)
            {
                Minimum = Matrix[i][j];
            }
            else if (Matrix[i][j] > Maximum)
            {
                Maximum = Matrix[i][j];
            }
        }
    }
    PrintMinimumMaximum(Minimum, Maximum);
}
int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3] = {{9, 5, 2}, {7, 55, 9}, {9, 80, 88888888}};
    // FillMatrixOfRandom(Matrix1, 3, 3);
    PrintMatrix(Matrix1, 3, 3);
    GetMaximumMinimumMatrix(Matrix1, 3, 3);

    return 0;
}