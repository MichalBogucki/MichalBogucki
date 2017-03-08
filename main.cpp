#include <iostream>
#include "funZ.h"
using namespace std;

string funZ (string str);

int main()
{
    string name, surname, nickname,output;
    cout << "Write name: ";
    cin >> name;
    cout << "Write surname: ";
    cin >> surname;
    cout << "Write nickname: ";
    cin >> nickname;
    

output = funZ(name) + " " + funZ(surname) + " " + funZ(nickname);
    cout << "Output Z: "  << output << endl;
    
    return 0;
}//int main()






