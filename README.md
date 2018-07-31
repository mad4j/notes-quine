# notes-quine

Compile using: 

`$ g++ -std=c++17 quine.cpp -o quine`

Verify using: 

`$ ./quine | diff quine.cpp -`


My signature

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
