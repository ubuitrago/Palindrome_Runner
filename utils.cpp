#include "utils.hpp"
#include <string>
#include <iostream>
#include <cmath>
#include <cwctype>
#include <cctype>
#include <cstring>

using namespace std;

//Utility functions
bool isPalindrome(string evaluate){

    string original = evaluate;

    int size = original.length();
    // declaring character array : reverse

    int i;
    int flag = 0;

    for (i = 0; i < size; i++) {

        if (i >= floor(size/2)) {
            break;
        }
        else if (original[i] != original[size-i-1]){
            flag = 1;
            break;
        }
        else{
            continue;
        }

    }

    if (flag == 0) {

        return true;
    }
    else {
        return false;
    }
}

bool isAlphanum(string s){

    int i;
    for (i = 0; i < s.length(); i++){

        if (isspace(s[i]) || !isalnum(s[i])){
            cout << s[i] << " is not alphanumeric." << endl;
            cout << "Only alphanumeric characters are valid input (a-z, A-Z, 0-9)." << endl;
            cout << "Try again..." << endl;
            return false;
        }
    }
    return true;
}

string convertCase(string input){
    int i;
    for (i=0; i < sizeof(input); i++){
        if (isupper(input[i]) && isalpha(input[i])){
            input[i] = tolower(input[i]);
        }
    }
    return input;
}