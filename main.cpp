#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void show(int Matrix[9][9])
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << Matrix[i][j] << " ";

      if (j == 2 or j == 5)
      {
        cout << "| ";
      }
    }
    if (i == 2 or i == 5)
    {
      cout << endl;
      cout << "---------------------";
    }
    cout << endl;
  }
}

int Generate()
{
  // create:
  int Sudoku[9][9];
  srand(time(0));

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      Sudoku[i][j] = 1 + (rand() % 9);
    }
  }

  show(Sudoku);
  cout << endl;
}

int main()
{
  Generate();
}