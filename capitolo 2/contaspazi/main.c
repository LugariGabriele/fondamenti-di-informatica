#include <stdlib.h>
#include <string.h>

extern size_t conta_spazi(const char *s);

int main(){
    size_t i;
    i= conta_spazi("uno spazio");
    i= conta_spazi ("tre spazi qui ");
    i= conta_spazi("  ");
    i= conta_spazi("");
}

