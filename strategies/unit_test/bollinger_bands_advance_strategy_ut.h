/*
 * Copyright (c) 2020, Rapprise.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AUTO_TRADER_BOLLINGER_BANDS_ADVANCE_STRATEGY_UT_H
#define AUTO_TRADER_BOLLINGER_BANDS_ADVANCE_STRATEGY_UT_H

#include <vector>

#include "common/market_data.h"

namespace auto_trader {
namespace strategies {
namespace unit_test {

std::vector<common::MarketData> BBAdvanceCandlesToSell = {
    {4024.000, 4037.103, 4024.000, 4037.103, 48443.68},
    {4033.702, 4031.596, 4029.084, 4036.949, 22679.10},
    {4035.500, 4042.520, 4035.000, 4044.522, 56092.22},
    {4045.040, 4032.001, 4029.657, 4055.000, 185420.6},
    {4034.490, 4026.065, 4020.476, 4040.365, 65618.72},
    {4024.417, 4021.603, 4007.349, 4024.417, 92948.86},
    {4021.604, 4010.747, 3994.632, 4021.604, 108735.3},
    {4010.748, 3941.415, 3910.000, 4010.748, 569963.6},
    {3931.773, 3971.063, 3931.773, 3972.817, 594030.5},
    {3971.063, 3963.584, 3950.000, 3971.063, 29870.05},
    {3962.000, 3953.524, 3950.619, 3963.584, 101898.1},
    {3955.966, 3956.803, 3941.634, 3956.803, 23971.30},
    {3962.000, 3962.180, 3957.530, 3968.036, 50543.09},
    {3960.866, 3967.390, 3956.850, 3967.740, 46536.86},
    {3966.035, 3958.304, 3957.375, 3966.589, 51445.05},
    {3962.050, 3965.263, 3958.869, 3968.800, 26582.59},
    {3965.263, 3970.750, 3962.048, 3973.149, 24939.40},
    {3970.750, 3975.000, 3968.001, 3975.000, 37307.79},
    {3975.000, 3970.087, 3968.005, 3975.000, 30291.99},
    {3969.134, 3972.686, 3969.134, 3975.709, 32195.62},
    {3977.468, 3980.629, 3976.427, 3981.323, 10163.16},
    {3980.629, 3981.294, 3977.628, 3981.300, 41095.89},
    {3978.100, 3981.297, 3978.008, 3981.297, 32727.14},
    {3980.983, 3977.538, 3969.020, 3989.423, 448148.4},
    {3975.103, 3979.939, 3973.632, 3979.939, 50646.00},
    {3979.788, 3975.867, 3975.461, 3980.716, 153452.5},
    {3975.864, 3978.115, 3972.000, 3978.115, 32706.52},
    {3978.080, 3978.020, 3978.020, 3978.080, 11979.37},
    {3978.018, 3978.014, 3977.904, 3978.018, 28293.95},
    {3978.014, 3978.014, 3978.014, 3978.015, 47719.06},
    {3978.014, 3981.801, 3978.014, 3981.802, 22427.24},
    {3981.000, 3980.953, 3980.953, 3987.909, 6809.847},
    {3983.915, 3982.203, 3980.002, 3983.918, 8815.133},
    {3981.626, 3978.014, 3978.014, 3981.634, 107818.2},
    {3978.014, 3969.864, 3969.863, 3978.015, 110596.5},
    {3969.359, 3969.814, 3969.359, 3971.987, 20073.18},
    {3969.814, 3971.800, 3969.813, 3971.800, 7327.583},
    {3972.000, 3976.327, 3972.000, 3976.477, 8729.217},
    {3976.326, 3971.797, 3969.771, 3976.326, 15443.50},
    {3970.112, 3970.662, 3969.983, 3975.910, 19988.87},
    {3972.410, 3963.999, 3962.051, 3975.062, 7422.022},
    {3964.000, 3963.496, 3962.342, 3964.000, 16034.42},
    {3967.783, 3982.930, 3967.783, 3982.930, 11128.44},
    {3977.750, 3981.435, 3976.486, 3981.435, 11675.37},
    {3981.435, 3981.908, 3981.435, 3984.320, 41952.94},
    {3980.000, 3974.364, 3974.364, 3980.000, 17439.12},
    {3976.415, 3980.000, 3976.415, 3980.000, 2590.629},
    {3980.000, 3981.279, 3980.000, 3984.100, 6165.509},
    {3979.992, 3979.669, 3976.960, 3979.992, 4764.306},
    {3979.992, 3980.299, 3979.992, 3984.996, 18645.99},
    {3983.914, 3981.041, 3975.901, 3984.411, 16542.77},
    {3982.000, 3987.000, 3981.634, 3987.000, 25386.95},
    {3989.174, 3988.980, 3988.000, 3998.000, 67038.49},
    {3988.977, 3988.350, 3988.000, 3992.552, 279862.8},
    {3988.328, 3991.674, 3984.698, 3991.720, 75052.29},
    {3991.674, 3995.486, 3991.100, 3995.512, 75046.35}};

common::MarketData additionalCandleToCheckDoubleCrossingToSell = {3995.484, 3989.759, 3988.000,
                                                                  3997.679, 284817.0};

double topCandleToSell = 3996.2695940161484;

std::vector<common::MarketData> BBAdvanceCandlesToBuy{
    {3976.415, 3980.000, 3976.415, 3980.000, 2590.629474},
    {3980.000, 3981.279, 3980.000, 3984.100, 6165.509439},
    {3979.992, 3979.669, 3976.960, 3979.992, 4764.306429},
    {3979.992, 3980.299, 3979.992, 3984.996, 18645.99704},
    {3983.914, 3981.041, 3975.901, 3984.411, 16542.77870},
    {3982.000, 3987.000, 3981.634, 3987.000, 25386.95043},
    {3989.174, 3988.980, 3988.000, 3998.000, 67038.49849},
    {3988.977, 3988.350, 3988.000, 3992.552, 279862.8422},
    {3988.328, 3991.674, 3984.698, 3991.720, 75052.29749},
    {3991.674, 3995.486, 3991.100, 3995.512, 75046.35599},
    {3995.484, 3989.759, 3988.000, 3997.679, 284817.0312},
    {3989.752, 3984.127, 3980.840, 3989.753, 14334.48239},
    {3983.761, 3978.000, 3972.030, 3987.155, 72377.01839},
    {3978.000, 3990.855, 3978.000, 3993.273, 36145.06359},
    {3987.408, 3991.770, 3985.724, 3991.772, 49381.58228},
    {3991.770, 3996.238, 3989.163, 3997.680, 26587.46013},
    {3997.000, 3992.000, 3990.264, 3997.000, 22774.95381},
    {3992.000, 3994.000, 3991.312, 3996.999, 19545.52569},
    {3993.999, 3995.928, 3991.181, 3997.191, 35060.38416},
    {3992.074, 3993.749, 3990.330, 3995.708, 15326.51488},
    {3992.211, 3986.500, 3985.698, 3992.211, 16114.45435},
    {3987.341, 3977.083, 3974.951, 3987.342, 20685.25730}};

std::vector<common::MarketData> BBAdvanceFiveCandles = {
    {6581.000, 6506.870, 6450.0, 6581.000, 824.000},
    {6502.885, 6145.360, 6049.999, 6502.885, 2610.000},
    {6120.000, 6200.889, 6050.000, 6242.660, 2150.000},
    {6190.000, 6186.000, 6170.042, 6238.590, 611.000},
    {6186.000, 6205.000, 6178.560, 6249.559, 133.000},
};

std::vector<common::MarketData> BBAdvanceEmptyMarketData;

}  // namespace unit_test
}  // namespace strategies
}  // namespace auto_trader

#endif  // AUTO_TRADER_BOLLINGER_BANDS_ADVANCE_STRATEGY_UT_H
