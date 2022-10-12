#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
    char appMode;
    cout << "Test Application,version 0.1" << endl << "Mode 1:Open file to use." << endl << "Mode 2:Enter command.";
    cout << "Mode(1/2):";
    cin >> appMode;

    for (;;){
        string inputStr = "";
        cout << ">>>";
        cin >> inputStr;
        if (inputStr == "exit"){
            break;
        };
    };
    cout << endl;
};