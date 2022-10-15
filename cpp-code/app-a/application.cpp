#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
// #include "./class/sys.h"
using namespace std;
//此函数用strtok方法，
string StringSplit(string TODO,string SPLITSTR){
    //获得Char型的被分隔值
    char* toDoChar = (char*)TODO.c_str();
    //获得Char型的分隔值
    const char* splitStrChar = SPLITSTR.c_str();
    //隔出后的暂存点
    char* token;
    
    return "";
};
int main(){
    string appMode;
    cout << "Ashto,version 0.1" << endl << "Mode 1:Open file to use." << endl << "Mode 2:Enter command." << endl;
    cout << "Mode(1/2):";
    cin >> appMode;
    if (appMode == "2"){
        for (;;){
            string inputStr = "";
            cout << ">>>";
            cin.get(inputStr);
            if (inputStr == "exit"){
                break;
            };
        };
    }else{
        ifstream toFile;
        toFile.open("in.ato",ios::in);
        string getFile;
        toFile >> getFile;
        StringSplit(getFile,"\n");
        toFile.close();
    };
};