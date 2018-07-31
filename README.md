# notes-quine

Compile using: 

`$ g++ -std=c++17 quine.cpp -o quine`

Verify using: 

`$ ./quine | diff quine.cpp -`


My signature [quine.cpp](quine.cpp):

```c++
auto s = R"(
#include <iostream>
int main() {
  std::cout << "auto s = R\"(" << s << ")\";" << s;
}
)";
#include <iostream>
int main() {
  std::cout << "auto s = R\"(" << s << ")\";" << s;
}

```

An other try [quine2.cpp](quine2.cpp):

```c++
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

```
