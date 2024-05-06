#include <stdlib.h>
#include <string.h>
size_t conta_spazi(const char *s){ //accetta stringa e conta gli spazi
size_t count=0;
for (size_t i = 0; i < strlen(s); i++)
{
    if (s[i]==' ')
    {
        count++;
    }
    
}

return count;
}
/*
int main(){
    size_t i;
    i= conta_spazi("uno spazio");
    i= conta_spazi ("tre spazi qui ");
    i= conta_spazi("  ");
    i= conta_spazi("");
}*/