// string ReverseString(string S1)
// {
//     vector<string> vString;
//     vString = MySplitFunction(S1);
//     string S2 = "";
//     // the iterator
//     vector<string>::iterator iter = vString.end();
//     while (iter != vString.begin())
//     {
//         --iter;
//         *iter = "hi";
//         S2 += *iter + " ";
//     }
//     S2 = S2.substr(0, S2.length() - 1);
//     return S2;
// }