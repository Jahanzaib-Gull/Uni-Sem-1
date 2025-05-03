#include <iostream>
using namespace std;

void result(int score) {
  if (score > 50) {
    cout << "Pass" << endl;
  } else {
    cout << "Fail" << endl;
  }
}

int main() {
  int score;
  cout << "Enter your score: ";
  cin >> score;
  result(score);
}