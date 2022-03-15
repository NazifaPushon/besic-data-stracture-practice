#include <iostream>
using namespace std;

#define n 100

class stack {
    int *arr;
    int top;

    public:
        stack(){
            arr = new int[n];
            top = -1;
        }

        void push(int x){
            if(top == n -1){
                cout << "stack overflow" << endl;
                return;
            };
            top++;
            arr[top] = x;
        }

        void pop(){
            if(top == -1){
                cout << "No element to pop" << endl;
                return;
            }
            top--;
        }

        int Top(){
            if(top == -1){
                cout << "No element in stack" << endl;
                return -1;
            }
            return arr[top];
        }

        bool empty(){
            return top == -1;
        }

        

};

void printStackElement(stack stack){
    while(!stack.empty()){
        cout << stack.Top() << endl;
        stack.pop();
    }
}




int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    printStackElement(st);
}