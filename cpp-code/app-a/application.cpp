#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
int main(int argc, char **argv){
    if (argv[1] == "/r"){
        cout << "------Getting------";
    }else{
        for (;;){
            string inputStr = "";
            cout << ">>>";
            cin >> inputStr;
        };
        cout << endl;
    };
};