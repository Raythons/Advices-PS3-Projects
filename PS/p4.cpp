#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int RandomNumber(int From, int To)
{
    int RandomNum = rand() % (From - To + 1) + From;
    return RandomNum;
}

void FillMatrixOf3(int Matrix[3][3], short Length1, short Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        for (int j = 0; j < Length2; j++)
        {
            Matrix[i][j] = RandomNumber(1, 100);
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

int SumOfCol(int Matrix[3][3], short Rows, short colNumber)
{
    int SumOfCol = 0;
    for (int row = 0; row < Rows; row++)
    {
        SumOfCol += Matrix[row][colNumber];
    }
    return SumOfCol;
};

void PrintMatrixColSum(int matrix[3][3], short row, short col)
{
    for (int i = 0; i < col; i++)
    {
        cout << "sun of col" << i + 1 << " is : " << SumOfCol(matrix, row, i) << endl;
    }
}
// void SumMatrixRowInArray(int arr[3][3], int arrSum[3], short row, short col)
// {
//     for (short i = 0; i < row; i++)
//     {
//         arrSum[i] = SumOFRow(arr, i, col);
//     }
// }

void PrintArrayOfSum(int arr[3], short Row)
{
    cout << "the Sum Of The Rows is : \n";
    for (int i = 0; i < Row; i++)
    {
        cout << "Sum Of Row " << i + 1 << " is : " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix[3][3];
    FillMatrixOf3(Matrix, 3, 3);
    PrintMatrix(Matrix, 3, 3);

    PrintMatrixColSum(Matrix, 3, 3);
    // PrintArrayOfSum(arr, 3);
    return 0;
}