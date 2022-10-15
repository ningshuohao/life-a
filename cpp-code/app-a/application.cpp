#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "class/sys.h"
using namespace std;
//此函数用strtok方法，
string StringSplit(string TODO,string SPLIT_STR){};
int main(){
    string appMode;
    cout << "Ashto,version 0.1" << endl << "Mode 1:Open file to use." << endl << "Mode 2:Enter command." << endl;
    cout << "Mode(1/2):";
    cin >> appMode;
    if (appMode == "2"){
        for (;;){
            string inputStr = "";
            cout << ">>>";
            cin >> inputStr;
            if (inputStr == "exit"){
                break;
            };
        };
    }else{
        ifstream toFile;
        string fileName;
        for (;;){
            cout << "File Name:";
            cin >> fileName;
            int fileType = StringSplit(fileName,".");
            if (fileType == 0){
                break;
            };
        };
        toFile.open(fileName,ios::in);
        string getFile;
        toFile >> getFile;
        StringSplit(getFile,"\n");
        toFile.close();
    };
};