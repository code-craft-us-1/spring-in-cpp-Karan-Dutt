#include "stats.h"
#include <vector>
#include <numeric>
#include <algorithm> 

Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& values) 
{
    Statistics::Stats statsValue;
    statsValue.average = std::accumulate( values.begin(), values.end(), 0.0) / values.size();
    statsValue.min = *std::min_element(values.begin(), values.end());
    statsValue.max = *std::max_element(values.begin(), values.end());
    return statsValue;
    //Implement statistics here
}
