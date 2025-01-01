#include "../lib/Unity/unity.h"
#include "../lib/Unity/unity.c"
#include "../lib/Unity/unity_internals.h"
#include "../Lesson_1.c" // Update the path to unity.h as needed
#include <string.h>
#include <stdio.h>

// Declaration of the function to be tested
void print_hello_world(void);

void setUp(void) {
    // Runs before each test
}

void tearDown(void) {
    // Runs after each test
}

void test_print_hello_world_ShouldPrintHelloWorld(void) {
    char buffer[128] = {0};

    // Redirect stdout to a file
    freopen("output.txt", "w", stdout);

    // Call the function to test
    print_hello_world();

    // Flush and close stdout
    fclose(stdout);

    // Read the file content
    FILE *file = fopen("output.txt", "r");
    fgets(buffer, sizeof(buffer), file);
    fclose(file);

    // Check the output
    TEST_ASSERT_EQUAL_STRING("Hello World!\n", buffer);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_print_hello_world_ShouldPrintHelloWorld);
    return UNITY_END();
}

