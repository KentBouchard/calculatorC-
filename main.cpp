#include <iostream>
using namespace std;

int main() {
  float num1, num2;
  char c;
  cout << "enter a number: ";
  cin >> num1;

  cout << "enter an operand: ";
  cin >> c;

  cout << "enter a second number: ";
  cin >> num2;
  switch(c) {
    case '*' :
      cout << num1*num2;
      break;
    case '+' :
      cout << num1+num2;
      break;
    case '-' :
      cout << num1-num2;
      break;
    case '/' :
      cout << num1/num2;
      break;
    default :
     cout << "invalid response ";
     break;
  }
}
