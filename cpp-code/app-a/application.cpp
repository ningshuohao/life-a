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
    int tokenCharNum;
    int toDoCharlen = toDoChar.strlen();
    //分割    @1 19line    @2 22line
    //第一个
    token = strtok(toDoChar,splitStrChar);
    tokenCharNum = token.sizeof();
    //剩下的
    for (int i = tokenCharNum;i < toDoCharlen;i++){
        token = strtok(NULL,splitStrChar);
        tokenCharNum = token.sizeof();
        for (int j = 0;j<tokenCharNum;j++){
            i++;
        };
    };
    return "";
};
int main(){
    string appMode;
    cout << "Ashto,version 0.1" << endl << "Mode 1:Open file to use." << endl << "Mode 2:Enter command." << endl;
    cout << "Mode(1/2):";
    cin >> appMode;
    if (appMode == "2"){
        for (;;){
            char* inputStr = (char*)"";
            cout << ">>>";
            cin >> inputStr;
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