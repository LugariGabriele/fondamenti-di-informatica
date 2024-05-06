#include <stdio.h>
#include "main.h"

extern void stampa_cross(unsigned int n);

int main() {
	for (unsigned int i = 0; i < 6; i++)
	{
		stampa_cross(i);
	}
}

