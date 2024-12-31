#include "../Unity/unity.h"
#include "../Lesson_1.c" // Include the main file to access the function

void setUp(void) {
    // Runs before every test
}

void tearDown(void) {
    // Runs after every test
}

void test_get_hello_world_message_ShouldReturnHelloWorld(void) {
    // Check if the function returns the correct message
    TEST_ASSERT_EQUAL_STRING("Hello World!", get_hello_world_message());
}

int main(void) {
    UNITY_BEGIN();

    // Run the test
    RUN_TEST(test_get_hello_world_message_ShouldReturnHelloWorld);

    return UNITY_END();
}
