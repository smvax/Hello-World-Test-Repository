#include "pch.h"
#include "triangle.h"

TEST(TriangleTest, TestGoodIntInitAndGetters) {
	Triangle t1(3, 4);
	EXPECT_DOUBLE_EQ(t1.getSide(), 3);
	EXPECT_DOUBLE_EQ(t1.getHeight(), 4);
}

TEST(TriangleTest, TestGoodDoubleInitAndGetters) {
	Triangle t1(3.4753, 4.23874);
	EXPECT_DOUBLE_EQ(t1.getSide(), 3.4753);
	EXPECT_DOUBLE_EQ(t1.getHeight(), 4.23874);
}

TEST(TriangleTest, TestBadZeroInit) {
	ASSERT_THROW(Triangle t1(0, 4), std::invalid_argument);
	ASSERT_THROW(Triangle t1(42.4, 0), std::invalid_argument);
	ASSERT_THROW(Triangle t1(0, 0), std::invalid_argument);
	ASSERT_NO_THROW(Triangle t1(0.0000001, 0.00001), std::invalid_argument);
}

TEST(TriangleTest, TestBadNegativeInit) {
	ASSERT_THROW(Triangle t1(-1.11, 3), std::invalid_argument);
	ASSERT_THROW(Triangle t1(11, -1), std::invalid_argument);
	ASSERT_THROW(Triangle t1(-13, -0.000001), std::invalid_argument);
}

TEST(TriangleTest, TestBadZeroNegativeInit) {
	ASSERT_THROW(Triangle t1(-1, 0), std::invalid_argument);
	ASSERT_THROW(Triangle t1(0, -3.3), std::invalid_argument);
}

TEST(TriangleTest, TestSetters) {
	Triangle t1(3.1, 4);
	EXPECT_DOUBLE_EQ(t1.getSide(), 3.1);
	EXPECT_DOUBLE_EQ(t1.getHeight(), 4);
	t1.setSide(334.1);
	t1.setHeight(5255);
	EXPECT_DOUBLE_EQ(t1.getSide(), 334.1);
	EXPECT_DOUBLE_EQ(t1.getHeight(), 5255);
}

TEST(TriangleTest, TestCalSmallBySmallArea) {
	Triangle t1(0.0001, 0.0005);
	EXPECT_DOUBLE_EQ(t1.calculateArea(), 0.000000025);
	EXPECT_EQ(t1.getSide(), 0.0001);
	EXPECT_EQ(t1.getHeight(), 0.0005);
}

TEST(TriangleTest, TestCalSmallByBigArea) {
	Triangle t1(0.0001, 429403);
	EXPECT_DOUBLE_EQ(t1.calculateArea(), 21.47015);
	EXPECT_EQ(t1.getSide(), 0.0001);
	EXPECT_EQ(t1.getHeight(), 429403);
}

TEST(TriangleTest, TestCalBigByBigArea) {
	Triangle t1(355, 429403);
	EXPECT_DOUBLE_EQ(t1.calculateArea(), 76219032.5);
	EXPECT_EQ(t1.getSide(), 355);
	EXPECT_EQ(t1.getHeight(), 429403);
}