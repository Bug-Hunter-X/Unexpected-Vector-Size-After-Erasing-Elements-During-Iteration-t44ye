#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec; 
  vec.push_back(1); 
  vec.push_back(2); 
  vec.push_back(3); 

  // Solution 1: Using iterators
  for (auto it = vec.begin(); it != vec.end(); ) {
    if (*it % 2 == 0) { //Example condition to remove even numbers
        it = vec.erase(it);
    } else {
        ++it;
    }
  }

  std::cout << "Solution 1 size: " << vec.size() << std::endl; // Size is correct


  // Solution 2: Using reverse iterator (Simpler for removing multiple items)
  std::vector<int> vec2; 
  vec2.push_back(1); 
  vec2.push_back(2); 
  vec2.push_back(3); 

  for (auto it = vec2.rbegin(); it != vec2.rend(); ++it) {
    if (*it % 2 == 0) {
      vec2.erase((it + 1).base());
    }
  }
    std::cout << "Solution 2 size: " << vec2.size() << std::endl; // Size is correct

  return 0;
}