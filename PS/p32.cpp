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