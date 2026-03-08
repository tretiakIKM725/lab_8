#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 10;
  float array[SIZE];
  srand(time(NULL));

  // рандом
  for (int i = 0; i < SIZE; i++){
    array[i] = (rand() % 1280 - 640) / 10.0;
  }

  // модуль
  for (int i = 0; i < SIZE; i++){
    if (array[i] < 0){
      array[i] = array[i] * -1; // <cmath> fabs()
    }
  }

  // вывод 
  for (int i = 0; i < SIZE; i++){
      cout << array[i] << " ";
    }

  // або можно все в один цикл чи в 2
    return 0;
}