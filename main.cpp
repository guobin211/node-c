#include <iostream>
#include "time.h"

using namespace std;

int64_t getCurrentTime()
{
  time_t curr = time(NULL);
  cout << curr << endl;
  return curr;
}

int main(int argc, char *argv[])
{
  std::cout << argc << std::endl;
  int32_t price_of_rocket;
  price_of_rocket = 1532958324;
  if (getCurrentTime() > price_of_rocket)
  {
    cout << "getCurrentTime" << endl;
  }
  else
  {
    cout << price_of_rocket << endl;
  }

  return 0;
}
