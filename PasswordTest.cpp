/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}


TEST(PracticeTest, repeating_triple)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aaay");
	ASSERT_EQ(3, actual);
}


//TEST(PracticeTest, none_string)
//{
//	Password my_password;
//	int actual = my_password.count_leading_characters("");
//	ASSERT_EQ(0, actual);
//}


TEST(PracticeTest, regular_word)
{
	Password my_password;
	int actual = my_password.count_leading_characters("dog");
	ASSERT_EQ(1, actual);
}


TEST(PracticeTest, num_string)
{
	Password my_password;
	int actual = my_password.count_leading_characters("55555piggo");
	ASSERT_EQ(5, actual);
}


// has_mixed_case Happy Tests
TEST(PracticeTest, has_mixed)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("Code");
	ASSERT_EQ(true, actual);
}


TEST(PracticeTest, not_mixed)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("epic");
	ASSERT_EQ(false, actual);
}


// has_mixed_case Sad tests
TEST(PracticeTest, empty_mixed)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("");
	ASSERT_EQ(false, actual);
}

