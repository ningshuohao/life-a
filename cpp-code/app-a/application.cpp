#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char **argv){
    if (argc == strlen(argv[0])){
        for (;;){
            char *inputStr = "";
            cout << ">>>";
            cin >> inputStr;
        };
        cout << endl;
    }else{
        //no code
    };
};