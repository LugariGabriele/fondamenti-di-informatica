#include<stdlib.h>
#include<stdio.h>
extern void itob(unsigned int x, char* sz, size_t n);

int maintest(unsigned int x, size_t n) {
	char sz[100];
	itob(x, sz, n);
	printf("x=%d in n=%d bit: itob ha ritornato la stringa \"%s\".\n", x, n, sz);
}
int main() {
	maintest(10, 8);


}