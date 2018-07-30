#include <iostream>
int main(int argc, char **argv) {
	char quote = 34;
	const char *arr[] = {
 	"#include <iostream>",
 	"int main(int argc, char **argv) {",
 	"	char quote = 34;",
 	"	const char *arr[] = {",
 	" 	",
 	"	};",
 	"	for(int i = 0; i < 4; ++i)",
 	"		std::cout << arr[i] << std::endl;",
 	"	for(int i = 0; i < 14; ++i)",
 	"		std::cout << arr[4] << quote << arr[i] << quote << ',' << std::endl;",
 	"	for(int i = 5; i < 14; ++i)",
 	"		std::cout << arr[i] << std::endl;",
 	"	return 0;",
 	"}",
	};
	for(int i = 0; i < 4; ++i)
		std::cout << arr[i] << std::endl;
	for(int i = 0; i < 14; ++i)
		std::cout << arr[4] << quote << arr[i] << quote << ',' << std::endl;
	for(int i = 5; i < 14; ++i)
		std::cout << arr[i] << std::endl;
	return 0;
}
