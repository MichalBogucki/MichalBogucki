#include <string>
using namespace std;

string funZ (string str)
{
    int i;
    for (i=0;i<str.size();i++)
    {
        switch (str[i])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
            str [i]='z';
            break;

            case 'A': case 'E': case 'I': case 'O': case 'U': case 'Y':
            str [i]='Z';
            break;

            default:
            break;
        }
    }
    return str;
}//string funZ (string str)
