// Random Rectangle

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main(){
  unsigned seed = time(0);
  srand(seed);

  std::string box_string;
  int max_length = 40;
  int length = rand() % max_length + 1;

  box_string.assign(length, '#');

  std::cout << box_string << std::endl;
  std::cout << box_string << std::endl;
  std::cout << box_string << std::endl;
  
  return 0;
}
