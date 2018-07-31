
#include <iostream>
#include <string>

std::string s = R"(
#include <iostream>
#include <string>

std::string s = R"(
";

int main() {
  std::cout << s.replace(59, 1, s+')');
  return 0;
}
)";

int main() {
  std::cout << s.replace(59, 1, s+')');
  return 0;
}
