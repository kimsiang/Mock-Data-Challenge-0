#ifndef CALODATAARTRECORD_HH
#define CALODATAARTRECORD_HH

#include <vector>

namespace gm2calo {

    /* structure for a single island (the length is variable) */
    struct Island {

        // time stamp of the 1st sample in the island
        int t_sample0;

        // vector of traces in the island
        vector<int> trace;
    };

    /* structure for 54 islands in a calorimeter */
    struct CaloIsland{

        Island[54];

    };

    /* structure for a collection of CaloIslands in a fill (700 us) */
    struct CaloIslandCollection{

        // vector of CaloIslands in a fill
        vector<CaloIsland> CaloIslandCollection;

        // t0 of each island determined from the laser calibration
        int[54] t0;

        // Calorimeter id number
        unsigned int id;
    };

}
