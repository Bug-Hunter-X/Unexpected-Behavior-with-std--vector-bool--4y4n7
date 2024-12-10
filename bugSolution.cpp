#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec; // Use std::vector<int> instead of std::vector<bool>
  vec.push_back(1); //Represent true as 1
  vec.push_back(0); //Represent false as 0
  std::cout << vec[0] << " " << vec[1] << std::endl;
  return 0;
}
