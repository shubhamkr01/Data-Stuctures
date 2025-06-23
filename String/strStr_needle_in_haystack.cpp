#include <iostream>
#include <string>

int main() {
  std::string haystack = "Let us find needle in this haystack";
  std::string needle = "needle";
  int res = strStr(haystack, needle);
  if(-1 == res) {
    std::cout << "Not found" << std::endl;
    return 0;
  }
  else {
    std::cout << "Target string found at index " << res << std::endl; 
  }

  return 0;
}

int strStr (std::string haystack, std::string needle) {
  
