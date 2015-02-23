#include <iostream>

using namespace std;

int main()
{
  string answer = "Watson";
  string responce;
  cout << "Let's play a gussing game." << "You get three tries. " << endl
  cout << "What is the name of the " << "computer that played Jeparty? ";
  getline(cin, responce);
  if (responce == answer)
  {
    cout << "That is correct!" << endl;
  }
  else
  {
    cout << "No, that is the wrong answer. Try again." << endl;
    cout << "What is the name of the " << "computer that played Jeparty? ";
    getline(cin, responce);
    if (responce == answer)
    {
      cout << "That is correct!" << endl;
    }
    else
    {
      cout << "That is still not correct. " << "one more try." << endl;
      cout << "What is the name of the " << "computer that played Jeparty? ";
      getline(cin, responce);
      if (responce == answer)
      {
        cout << "That is correct!" << endl;
      }
      else
      {
        cout << "That is not the correct answer." << " You have run out of attempts to guess the correct answer!" << endl;
        cout << "The correct answer is Watson." << endl;
      }
    }
  }
  return 0;
}
