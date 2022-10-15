#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
string StringSplit(string splitStr,const const char* toSplitchar){
    string returnArray[256] = {};
    istringstream iss(splitStr);
    string tokenString;
    int tokenNum = 0;
    while(tokenString<<iss){
        returnArray[tokenNum] = tokenString;
        tokenNum++;
    };
    return returnArray;
};
int main(){
    string appMode;
    cout << "Test Application,version 0.1" << endl << "Mode 1:Open file to use." << endl << "Mode 2:Enter command." << endl;
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
            string fileType = (StringSplit(fileName,"."))[1];
            if (fileType == "test"){
                break;
            };
        };
        toFile.open(fileName,ios::in);
        string getFile;
        getFile << toFile;
        StringSplit(getFile,"\n");
        toFile.close();
    };
};