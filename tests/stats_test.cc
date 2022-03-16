//
// Created by 华为 on 2022/3/14.
//

#include "stats.h"
#include "error.h"
#include <gtest/gtest.h>


double mock_data[][10] = {{5., 5.,      10.,     12.,     5.,      5.,      10.,     12.,     5.,      5.},
                         {0,  9.6476,  11.8961, 13.8641, 15.7293, 17.5038, 19.2113, 20.8665, 22.4796, 24.0579},
                         {0,  10.0830, 12.3505, 14.3359, 16.2170, 18.0063, 19.7276, 21.3960, 23.0217, 24.6119},
                         {0,  10.3114, 12.5845, 14.5760, 16.4629, 18.2578, 19.9845, 21.6581, 23.2887, 24.8838},
                         {0,  10.4405, 12.7143, 14.7077, 16.5965, 18.3935, 20.1223, 21.7980, 23.4307, 25.0278},
                         {0,  10.5581, 12.8297, 14.8234, 16.7127, 18.5105, 20.2403, 21.9171, 23.5510, 25.1493},
                         {0,  10.5152, 12.7880, 14.7818, 16.6711, 18.4687, 20.1982, 21.8747, 23.5082, 25.1062},
                         {0,  10.5816, 12.8524, 14.8460, 16.7352, 18.5331, 20.2631, 21.9401, 23.5742, 25.1728},
                         {0,  10.5932, 12.8635, 14.8570, 16.7463, 18.5442, 20.2743, 21.9515, 23.5858, 25.1846}};

// Demonstrate some basic assertions.
TEST(SPCTest, TestMean) {
    CALC_RET ret;
    printf("test\n");
    int r = CalcMean(mock_data[0], 10, &ret);
    EXPECT_EQ(r, ERROR_NO_ERROR);
}
//
TEST(SPCTest, TestStandardDeviation) {
    CALC_RET ret;
    int r = CalcStandardDeviation(mock_data[0], 10, 1, 0.0, &ret);
    EXPECT_EQ(r, ERROR_NO_ERROR);
}

//int main(){
//    printf("111\n");
//    CALC_RET ret;
//    int r = CalcMean(mock_data[0], 10, &ret);
//    printf("ret: %f\n", ret.info);
//}
