#include <iostream>

using namespace std;

int main()
{
  int num1, num2, product, count;
  product = 0;
  count = 1;
  cout << "What is the first number: ";
  cin >> num1;
  cout << "What is the second number: ";
  cin >> num2;
  while (count <= num1)
    {
      product += num2;
      ++count;
    }
  cout << num1 << " times " << num2 << " = " << product << endl;
  return 0;
}
