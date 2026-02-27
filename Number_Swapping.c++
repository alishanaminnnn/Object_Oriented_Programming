#include <iostream>
using namespace std;

int *marks(int *a, int *b)
{
  int **ptr;
  if (*a > *b)
  {
    cout << *a << " this is maximum" << endl;
    ptr = &a;
    return *ptr;
  }
  else if (*a < *b)
  {
    cout << *b << " this is maximum" << endl;
    ptr = &b;
    return *ptr;
  }
  else
  {
    cout << "Both are equal";
  }
}

int main()
{
  int num1;
  int num2;
  cout << "Enter a Number: ";
  cin >> num1;

  cout << "Enter a Number: ";
  cin >> num2;

  marks(&num1, &num2);
  return 0;
}