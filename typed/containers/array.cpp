#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void logCode(int i) {
  std::cout << i << "\n";
};

void takeTime() {
  double a = 3.1415926;
  double b = 2.178;
  
  for (size_t i = 0; i < 10000000000; i++)
  {
    a += b;
  }

  double total = a;

  cout << total << "\n";
  
}

int main()
{
  time_t start = time(NULL);
  takeTime();
  time_t end = time(NULL);
  cout << end - start << "ms\n";
  // cout << "hello array";
  // array<int, 5> arr = {1, 2, 3, 4, 5};

  // cout << "array size: ";
  // // 20
  // cout << sizeof(arr) << "\n";
  // // 5
  // cout << arr.size() << "\n";

  // for (size_t i = 0; i < arr.size(); i++)
  // {
  //   cout << arr[i] << "\n";
  // }

  // cout << arr.at(2);

  // logCode(arr.back());
  // logCode(arr.front());

  // for (auto i : arr)
  // {
  //   logCode(i);
  // }


  return 0;
}
