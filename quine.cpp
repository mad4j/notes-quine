#include <iostream>
#include <iomanip>

int main() {
  const char *s[] = {
    "#include <iostream>",
    "#include <iomanip>",
    "",
    "int main() {",
    "  const char *s[] = {",
    "  };",
    "  for(int i = 0; i < 5; ++i)",
    "    std::cout << s[i] << std::endl;",
    "  for(int i = 0; i < 14; ++i)",
    "    std::cout << std::setw(4) << ' ' << std::quoted(s[i]) << ',' << std::endl;",
    "  for(int i = 5; i < 14; ++i)",
    "    std::cout << s[i] << std::endl;",
    "  return 0;",
    "}",
  };
  for(int i = 0; i < 5; ++i)
    std::cout << s[i] << std::endl;
  for(int i = 0; i < 14; ++i)
    std::cout << std::setw(4) << ' ' << std::quoted(s[i]) << ',' << std::endl;
  for(int i = 5; i < 14; ++i)
    std::cout << s[i] << std::endl;
  return 0;
}
