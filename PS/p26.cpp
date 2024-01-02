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

void ToUpper(string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        S[i] = toupper(S[i]);
    }
    cout << S;
}
void ToLower(string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        S[i] = tolower(S[i]);
    }
    cout << S;
}

void ToUpperAndLower(string S)
{
    cout << " To Upper Is : \n";
    ToUpper(S);
    cout << " To lower Is : \n";
    ToLower(S);
}

int main()
{
    srand((unsigned)time(NULL));
    // int Matrix1[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};
    // FillMatrixOfRandom(Matrix1, 3, 3);
    ToUpperAndLower(ReadUserString());

    return 0;
}
