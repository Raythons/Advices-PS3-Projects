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

int SumOFRow(int Matrix[3][3], short RowNumber, short cols)
{
    int SumOFRow = 0;
    for (int col = 0; col < cols; col++)
    {
        SumOFRow += Matrix[RowNumber][col];
    }
    return SumOFRow;
};

void SumMatrixRowInArray(int arr[3][3], int arrSum[3], short row, short col)
{
    for (short i = 0; i < row; i++)
    {
        arrSum[i] = SumOFRow(arr, i, col);
    }
}

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
    int arr[3];
    FillMatrixOf3(Matrix, 3, 3);
    PrintMatrix(Matrix, 3, 3);

    SumMatrixRowInArray(Matrix, arr, 3, 3);
    PrintArrayOfSum(arr, 3);
    return 0;
}