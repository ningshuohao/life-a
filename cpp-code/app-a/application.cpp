#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
int main(){
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