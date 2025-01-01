#include "../lib/Unity/unity.h"
#define TESTING
#include "../Lesson_1.c" // Include the main file to access the function
#include <string.h>
#include <stdio.h>


// Buffer to capture output
// Define the required Unity functions
void setUp(void) {
    // This function is run before each test
}

void tearDown(void) {
    // This function is run after each test
}

// Test function
void test_print_hello_world_ShouldPrintHelloWorld(void) {
    // Buffer to capture output
    char buffer[128] = {0};

    // Redirect stdout to the buffer
    freopen("/dev/null", "a", stdout);
    setvbuf(stdout, buffer, _IOFBF, sizeof(buffer));

    // Call the function to test
    print_hello_world();

    // Restore stdout and check the output
    freopen("/dev/tty", "a", stdout);
    TEST_ASSERT_EQUAL_STRING("Hello World!\n", buffer);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_print_hello_world_ShouldPrintHelloWorld);
    return UNITY_END();
}