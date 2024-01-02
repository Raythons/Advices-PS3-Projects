#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int RandomNumber(int From, int To)
{
    int RandomNum = rand() % (From - To + 1) + From;
    return RandomNum;
}

void FillMatrixOf3Ordered(int Matrix[3][3], short row, short col)
{
    short Counter = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Counter++;
            Matrix[i][j] = Counter;
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Length1, short Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        for (int j = 0; j < Length2; j++)
        {
            cout << setw(3) << Matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix[3][3];
    FillMatrixOf3Ordered(Matrix, 3, 3);
    PrintMatrix(Matrix, 3, 3);
    return 0;
}