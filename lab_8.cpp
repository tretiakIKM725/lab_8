#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 10;
  float array[SIZE];
  float startArr[SIZE];
  srand(time(NULL));

  // рандом
  for (int i = 0; i < SIZE; i++){
    array[i] = (rand() % 1280 - 640) / 10.0;
    startArr[i] = array[i];
  }

  // модуль
  for (int i = 0; i < SIZE; i++){
    if (array[i] < 0){
      array[i] = array[i] * -1; // <cmath> fabs()
    }
  }

  // вывод 
  for (int i = 0; i < SIZE; i++){
    cout << i + 1 << " елемент массиву до : " << startArr[i] << " після : " << array[i] << endl;
    }

  // або можно все в один цикл чи в 2
    return 0;
}