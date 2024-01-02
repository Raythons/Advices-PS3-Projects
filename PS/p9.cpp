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

void MiddleRowOfMatrix(int Matrix[3][3], short rows, short cols)
{

    short MiddleOfMatrix = floor(rows / 2);
    for (int i = 0; i < cols; i++)
    {
        cout << Matrix[MiddleOfMatrix][i] << "  ";
    }
    cout << endl;
}

void MiddleColOfMatrix(int Matrix[3][3], short rows, short cols)
{

    short MiddleOfMatrix = floor(cols / 2);
    for (int i = 0; i < rows; i++)
    {
        cout << Matrix[i][MiddleOfMatrix] << "  ";
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
    FillMatrixOfRandom(Matrix1, 3, 3);

    PrintMatrix(Matrix1, 3, 3);

    MiddleRowOfMatrix(Matrix1, 3, 3);
    MiddleColOfMatrix(Matrix1, 3, 3);
    return 0;
}