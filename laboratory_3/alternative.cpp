#include <iostream>
using namespace std;

int main() {
    int start = 0;
    string inputStr;

    getline(cin, inputStr);
    inputStr += " ";

    for(int i=0; i < inputStr.size(); i++) {
        if(inputStr[i] != ' ') continue;

        if(i - start <= 6) {
            for(int j=start; j < i; j++) {
                cout << inputStr[j];
            }
            cout << " ";
        }

        start = i + 1;
    }
    return 0;
}









