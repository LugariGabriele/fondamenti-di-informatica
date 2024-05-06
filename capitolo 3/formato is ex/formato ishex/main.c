#include <ctype.h>
#include <stdlib.h>
extern int is_hex(const char* s);

int main() {
	int res = 0;
	res = is_hex("0x1a");
	res = is_hex("0x123456789");
}