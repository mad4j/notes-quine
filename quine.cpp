#include <iostream>
#include <iomanip>

int main() {
  const char *s[] = {
    "    ",
    "#include <iostream>",
    "#include <iomanip>",
    "",
    "int main() {",
    "  const char *s[] = {",
    "  };",
    "  for(int i = 1; i < 6; ++i)",
    "    std::cout << s[i] << std::endl;",
    "  for(int i = 0; i < 15; ++i)",
    "    std::cout << s[0] << std::quoted(s[i]) << ',' << std::endl;",
    "  for(int i = 6; i < 15; ++i)",
    "    std::cout << s[i] << std::endl;",
    "  return 0;",
    "}",
  };
  for(int i = 1; i < 6; ++i)
    std::cout << s[i] << std::endl;
  for(int i = 0; i < 15; ++i)
    std::cout << s[0] << std::quoted(s[i]) << ',' << std::endl;
  for(int i = 6; i < 15; ++i)
    std::cout << s[i] << std::endl;
  return 0;
}

