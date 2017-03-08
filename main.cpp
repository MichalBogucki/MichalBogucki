#include <iostream>
#include "funRev.h"
using namespace std;

string funRev (string str);

int main()
{
    string name, surname, nickname,output;
    cout << "Write name: ";
    cin >> name;
    cout << "Write surname: ";
    cin >> surname;
    cout << "Write nickname: ";
    cin >> nickname;
    
    output = funRev(name) + " " + funRev(surname) + " " + funRev(nickname);
    cout << "Output Rev: "  << output << endl;


    return 0;
}//int main()






