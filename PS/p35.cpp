void printEachWord(string S1)
{

    string delim = " ";
    cout << " The Words Of yOUR sTRING Are << \n\n";
    short pos;
    string SingleWord;
    while ((pos = S1.find(delim)) != std::string::npos)
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