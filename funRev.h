#include <string>
using namespace std;

string funRev (string str)
{
    int i;
    string temp=str;
    for (i=0;i<str.size();i++)
    {
        str[i]=temp[str.size()-1-i];
    }
    return str;
}//string funRev (string str)
