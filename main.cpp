#include <iostream>
#include "middle_list.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string str, sep;
    getline(cin, str);
    cin >> sep;
    //vector<char> mass = itc_strtlist(str);
    string res = itc_rmstrchar(str);
    cout << res;
    return 0;
}
