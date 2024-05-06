#include<stdlib.h>
#include <string.h>
extern size_t conta_parole(const char* s);
int main() {
	size_t n;
	n = conta_parole("una");
	n = conta_parole(" una");
	n = conta_parole("una due");

}