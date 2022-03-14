#include <iostream>
using namespace std;

int main(){
   
    int size;
    cout << "please enter the size of the array" << " : " ;
    cin >> size;
    float monthArray[size];
   float total = 0;
   for(int i = 0; i < size; i++){
       cout << "enter amount for month " <<i +1<< "  : ";
       cin >> monthArray[i];
       total += monthArray[i];
   }
   float avarage = total / 6;
   float inTwoYears = avarage * 24;
   cout << "total " << total << endl;
   cout << "avarage " << avarage << endl;
   cout << "In two years " << inTwoYears << endl;
};