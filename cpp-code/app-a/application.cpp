#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv){
    if (argc == strlen(argv[0])){
        for (;;){
            string inputStr;
            cout << ">>>";
            cin >> inputStr;
        };
        cout << endl;
    }else{
        //no code
    };
};