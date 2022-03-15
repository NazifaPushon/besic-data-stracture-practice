#include <iostream>
#include <stack>
using namespace std;
void printStackElement(stack<int> stack){
    while(!stack.empty()){
        cout << stack.top() << endl;
        stack.pop();
    }
}


int main(){
    stack<int>number;
    number.push(1);
    number.push(2);
    number.push(3);
    number.push(4);

    printStackElement(number);
}