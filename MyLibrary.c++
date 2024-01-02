#include <iostream>
#include <vector>
using namespace std;
int SumOFRow(int Matrix[3][3], short RowNumber, short cols)
{
    int SumOFRow = 0;
    for (int col = 0; col < cols; col++)
    {
        SumOFRow += Matrix[RowNumber][col];
    }
    return SumOFRow;
};
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
bool IsTypicalMatrix(int Matrix1[3][3], int Matrix2[3][3], short Length1, short Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        for (int j = 0; j < Length2; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

// Start Of String
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
void UpperFirstLetterWords(string S)
{
    bool IsFirstLetter = true;
    for (char c = 0; c < S.length(); c++)
    {
        if (S[c] != ' ' && IsFirstLetter)
        {
            S[c] = toupper(S[c]);
        }
        IsFirstLetter = (S[c] == ' ' ? true : false);
    }
    cout << S << endl;
}
void ToLower(string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        S[i] = tolower(S[i]);
    }
}
void ToUpper(string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        S[i] = toupper(S[i]);
    }
    cout << S;
}
// void PrintFirstLetterForEachWord(string S)
// {
//     bool IsFirstLetter = true;
//     for (char c = 0; c < S.length(); c++)
//     {
//         if (S[c] != ' ' && IsFirstLetter)
//         {
//             cout << S[c] << endl;
//         }
//         IsFirstLetter = (S[c] == ' ' ? true : false);
//     }
// }
enum enWhatToCount
{
    Small = 0,
    Capital = 1,
    All = 3
};
int CountLetters(string S, enWhatToCount WhatToCount = enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
    {
        return S.length();
    }
    if (WhatToCount == enWhatToCount::Small)
    {
        int LowerCount = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (islower(S[i]))
            {
                LowerCount++;
            }
        }
        return LowerCount;
    }
    if (WhatToCount == enWhatToCount::Capital)
    {
        int CapitalCount = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (isupper(S[i]))
            {
                CapitalCount++;
            }
        }
        return CapitalCount;
    }
    else
    {
        return 0;
    }
}
int CountLetterFromString(string S, char CharacterToSearch)
{
    int CharCount = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == CharacterToSearch)
        {
            CharCount++;
        }
    }
    return CharCount;
}
int CountLetterFromString(string S, char CharacterToSearch, bool MatchCase = true)
{
    int CountWithIgnoreCase = 0;
    int CharCount = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (MatchCase)
        {
            if (S[i] == CharacterToSearch)
            {
                CharCount++;
            }
        }
        else
        {
            if (tolower(S[i]) == tolower(CharacterToSearch))
            {
                CharCount++;
            }
        }
    }
    return CharCount;
}
// int CountVowelOfString(string S)
// {
//     int NumberOfVowels = 0;
//     for (int i = 0; i < S.length(); i++)
//     {
//         if (isVowel(S[i]))
//         {
//             NumberOfVowels++;
//         }
//     }
//     return NumberOfVowels;
// }

void printEachWord(string S1)
{
    string delim = " ";
    cout << " The Words Of yOUR sTRING Are << \n\n";
    short pos;
    string SingleWord;
    while ((pos = S1.find(delim)) != std::string::npos) // rashhed
    {
        SingleWord = S1.substr(0, pos);
        if (SingleWord != "")
        {
            cout << SingleWord << endl;
        }
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "")
    {
        cout << S1;
    }
}

int CountWords(string S1)
{
    string delim = " ";
    short pos;
    string SingleWord;
    short NumberOfWords = 0;
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        SingleWord = S1.substr(0, pos);
        if (SingleWord != "")
        {
            NumberOfWords++;
        }
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "")
    {
        NumberOfWords++;
    }
    return NumberOfWords;
}
vector<string> MySplitFunction(string S1, string delim = " ")
{
    short pos;
    string SingleWord;
    short Tokens = 0;
    vector<string> vWords;
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        SingleWord = S1.substr(0, pos);
        if (SingleWord != "")
        {
            vWords.push_back(SingleWord);
        }
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "")
    {
        vWords.push_back(S1);
    }
    return vWords;
}
string TrimLeft(string S1, string TrimWhat = " ")
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}
string TrimRight(string S1, string TrimWhat = " ") // hello123
{
    for (short i = S1.length() - 1; i > 0; i--)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}
string Trim(string S1)
{
    string TrimString = "";
    TrimString = TrimLeft(S1);
    TrimString = TrimRight(TrimString);
    return TrimString;
}
string MyJoinFunction(vector<string> vNames, string Delim = " ")
{
    string MyString = "";
    for (string &Name : vNames)
    {
        MyString = MyString + Name + Delim;
    }
    return MyString.substr(0, MyString.length() - Delim.length());
}
string ReverseString(string S1)
{
    vector<string> vString;
    vString = MySplitFunction(S1);
    string S2 = "";
    // the iterator
    vector<string>::iterator iter = vString.end();
    while (iter != vString.begin())
    {
        --iter;
        *iter = "hi";
        S2 += *iter + " ";
    }
    S2 = S2.substr(0, S2.length() - 1);
    return S2;
}
string ReplaceBuiltinFunction(string S1, string WordToReplace, string ReplaceWith)
{
    short pos = S1.find(WordToReplace);
    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, WordToReplace.length(), ReplaceWith);
        pos = S1.find(WordToReplace);
    }
    return S1;
}
string LowerAllString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
string ReplaceWordsUsingSplit(string S1, string WordToReplace, string ReplaceTo, bool CaseSensitive)
{

    vector<string> vWords = MySplitFunction(S1);
    for (string &Word : vWords)
    {
        if (CaseSensitive)
        {
            if (Word == WordToReplace)
            {
                Word = ReplaceTo;
            }
        }
        else
        {
            if (LowerAllString(WordToReplace) == LowerAllString(Word))
            {
                Word = ReplaceTo;
            }
        }
    }
    string ReplacedString = MyJoinFunction(vWords);
    return ReplacedString;
}

// End Of String
// start of chars
char ReadUserCharacter()
{
    char c;
    cout << "Please Enter Character To Invert: \n";
    cin >> c;
    return c;
}
char InvertCharacterCase(char C)
{
    return (isupper(C) ? tolower(C) : toupper(C));
}
bool isVowel(char C)
{
    C = tolower(C);
    return (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u');
}
// End of chars
vector<string> MySplitFunctions(string Line, string Delim = "#//#")
{
    // pos = Line.find(Delim);
    short pos = 0;
    string Word = "";
    vector<string> vLine;
    while ((pos = Line.find(Delim)) != string::npos)
    {
        Word = Line.substr(0, pos);
        if (Word != "")
        {
            vLine.push_back(Word);
        }
        Line.erase(0, pos + Delim.length());
    }
    if (Line != "")
    {
        vLine.push_back(Line);
    }
    return vLine;
}
int main()
{
    vector<string> MYvectors = MySplitFunctions("hello#//#nnonoonon#//#jdhdhgd#//#hello#//#hello#//#", "#//#");

    return 0;
}