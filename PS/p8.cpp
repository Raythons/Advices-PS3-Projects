#include <iostream>
#include <string>
#include <iomanip>

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
void Multiply2Matrices(int Matrix1[3][3], int Matrix2[3][3], int MultiPlayedMatrix[3][3], short row, short col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            MultiPlayedMatrix[i][j] = (Matrix1[i][j] * Matrix2[i][j]);
        }
        cout << endl;
    }
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

int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3];
    int Matrix2[3][3];
    int MultiplyMatrices[3][3];
    FillMatrixOfRandom(Matrix1, 3, 3);
    FillMatrixOfRandom(Matrix2, 3, 3);

    PrintMatrix(Matrix1, 3, 3);
    PrintMatrix(Matrix2, 3, 3);
    Multiply2Matrices(Matrix1, Matrix2, MultiplyMatrices, 3, 3);
    PrintMatrix(MultiplyMatrices, 3, 3);
    return 0;
}