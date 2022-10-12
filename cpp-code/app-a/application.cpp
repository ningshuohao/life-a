#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
int main(int argc, char **argv){
    if (argc == strlen(argv[0])){
        for (;;){
            string inputStr = "";
            cout << ">>>";
            cin >> inputStr;
        };
        cout << endl;
    }else{
        if (argv[1] == "/r"){
            cout << "------Getting------";
        };
    };
};