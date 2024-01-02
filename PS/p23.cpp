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
string ReadUserString()
{
    string Word;
    cout << "Please Enter Your String: \n";
    getline(cin, Word);
    return Word;
}
void PrintFirstLetterForEachWord(string S)
{
    bool IsFirstLetter = true;
    for (char c = 0; c < S.length(); c++)
    {
        if (S[c] != ' ' && IsFirstLetter)
        {
            cout << S[c] << endl;
        }
        IsFirstLetter = (S[c] == ' ' ? true : false);
    }
}
int main()
{
    srand((unsigned)time(NULL));
    // int Matrix1[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};
    // FillMatrixOfRandom(Matrix1, 3, 3);
    PrintFirstLetterForEachWord(ReadUserString());

    return 0;
}
