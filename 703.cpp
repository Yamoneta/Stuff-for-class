#include <iostream>

using namespace std;

int main()
{
  int hoursWorked;
  double rate, grosePay;
  cout << "Enter the hours worked: ";
  cin >> hoursWorked;
  cout << "Enter the rate of pay: ";
  cin >> rate;
  if (hoursWorked <= 40)
  {
    grosePay = hoursWorked * rate;
  }
  if (hoursWorked > 40)
  {
    grosePay = (40 * rate) + ((hoursWorked - 40) * (rate * 1.5));
  }
  cout << "Gross pay is: " << grosePay << endl;

  return 0;
}
