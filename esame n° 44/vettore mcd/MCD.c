#include <stdint.h>
#include <stddef.h>

 uint32_t vector_MCD(const uint32_t* v, size_t n) {
    // Check for invalid input conditions
    if (v == NULL || n == 0) {
        return 0;
    }

    // Calculate GCD of non-null, non-zero elements in the vector
    uint32_t result = v[0];  // Initialize result with the first element

    for (size_t i = 1; i < n; ++i) {
        // Check for zero element in the vector
        if (v[i] == 0) {
            return 0;
        }

        // Update result with the GCD of the current element and the previous result
        result = calculate_GCD(result, v[i]);
    }

    return result;
}

// Function to calculate the GCD of two numbers
uint32_t calculate_GCD(uint32_t a, uint32_t b) {
    while (b != 0) {
        uint32_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}