#include <iostream>
#include <string>
using namespace std;
void eraseDemo(string str)
{
    string s = str.erase(1, 1);
    cout << "After erase : ";
    cout << s << " " << str;
}
int main()
{
    string str("Hello World!");
    cout << "Before erase : ";
    cout << str << endl;
    eraseDemo(str);

    return 0;
}
