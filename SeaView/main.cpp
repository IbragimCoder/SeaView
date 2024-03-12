#include <iostream>
#include "func.cpp"
#include <gtest/gtest.h>
#include <vector>

TEST(seaview, Test1)
{
    std::vector<int> vec_1 = { 1,3,2 };
    SeaView building(vec_1);
    std::vector<int> index_1 = { 1,2 };
    ASSERT_EQ(index_1, building.getIndex());
}

TEST(seaview, Test2)
{
    std::vector<int> vec_2 = { 4,3,2,1 };
    SeaView building(vec_2);
    std::vector<int> index_2 = { 0,1,2,3 };
    ASSERT_EQ(index_2, building.getIndex());
}

TEST(seaview, Test3)
{
    std::vector<int> vec_3 = { 1,3,2,4 };
    SeaView building(vec_3);
    std::vector<int> index_3 = { 3 };
    ASSERT_EQ(index_3, building.getIndex());
}


TEST(seaview, Test4)
{
    std::vector<int> vec_4;
    ASSERT_TRUE(vec_4.empty());
}


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


