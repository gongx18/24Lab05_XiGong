// usestack.cpp - for CS 24 lab practice using stacks
// NAME(S), DATE

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    // evaluating "7 5 - "
    Stack s;
    s.push(7);
    s.push(5);
    //find token
    int right = s.top();
    s.pop();
    int left = s.top();
    s.pop();
    s.push(left - right); 

    cout << s.top() <<endl; 
    

    return 0;
}
