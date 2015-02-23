#include <iostream>

using namespace std;

int main()
{
  /* double ballance, rate;
  int years, count;
  cout << "What is the starting ballance? ";
  cin >> ballance;
  cout << "What is the annual intrest rate? ";
  cin >> rate;
  cout << "How many years to calculate intrest? ";
  cin >> years;
  count = 1
  while (years > 0 )
  {
    balace *= rate; //rate 1.xx
    --years;

  }
  cout << "After " << years << " years, your ballance will be " << balllance << "." << endl;
*/
  int num1; num2; product, count;
  product = 0;
  count = 1;
  cout << "What is the first number: ";
  cin >> num1
  cout << "What is the second number: ";
  cin >> num2
  while (count <= num1)
  {
    product += num2;
    ++count;
  }
  cout << num1 << " times" << num2 << " = " << product << endl;
  return 0;
}
