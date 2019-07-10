#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string input1;
    cout << "Welcome to AgentOS V230.20043." << endl;
    cout << "To log in, please type \"log in\"" << endl;
    getline(cin, input1);
    if (input1 == "log in")
    {
        cout << "Please enter your Agent ID." << endl;
    }
    return 0;
}
