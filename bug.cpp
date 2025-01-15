std::vector<int> vec; 
vec.push_back(1); 
vec.push_back(2); 
vec.push_back(3); 

for (int i = 0; i < vec.size(); ++i) { 
  vec.erase(vec.begin() + i); 
}

// Expected size: 0 
// Actual size: 1