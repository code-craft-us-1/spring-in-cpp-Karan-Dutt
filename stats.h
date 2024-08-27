#include <vector>
#include <corecrt_math.h>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats
    {
        double average = NAN;
        double max = NAN;
        double min = NAN;

    };
    Stats ComputeStatistics(const std::vector<double>& );
}
