#include "unity.h"

void setUp()
{
}

void tearDown()
{
}

void test_true()
{
	TEST_ASSERT_TRUE(0 == 1);
}

void test_equal()
{
	TEST_ASSERT_EQUAL(0, 1);
}

void test_str()
{
	TEST_ASSERT_EQUAL_STRING("a", "b");
}

void test_mem()
{
	int a = 0;
	int b = 1;

	TEST_ASSERT_EQUAL_MEMORY(&a, &b, sizeof(a));
}

void test_arr()
{
	int a[] = {0, 1, 2};
	int b[] = {1, 2, 3};

	TEST_ASSERT_EQUAL_INT_ARRAY(a, b, sizeof(a) / sizeof(a[0]));
}

void test_pass()
{
	TEST_ASSERT_TRUE(0 == 0);
}

int main()
{
	UNITY_BEGIN();
	RUN_TEST(test_true);
	RUN_TEST(test_equal);
	RUN_TEST(test_str);
	RUN_TEST(test_mem);
	RUN_TEST(test_arr);
	RUN_TEST(test_pass);
	return UNITY_END();
}
