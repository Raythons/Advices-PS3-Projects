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