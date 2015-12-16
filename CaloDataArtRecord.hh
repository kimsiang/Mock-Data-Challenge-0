#ifndef CALODATAARTRECORD_HH
#define CALODATAARTRECORD_HH

#include <vector>

namespace gm2calo {

    /* structure for a single island (the length is variable) */
    struct IslandArtRecord {

        // Island number in a single fill
        int island_num;

        // Crystal number
        int xtal_num;

        // time stamp of the 1st sample in the island
        int t_first;

        // length of the island
        int length;

        // vector of traces in the island
        std::vector<UShort_t> trace;
    };

    /* structure for 54 islands in a calorimeter */
    struct Calo_IslandArtRecord{

        // Calo Island number in a single fill. Should be the same as the island_num
        int calo_island_num;

        // Calorimeter number
        int calo_num;

        // time stamp of the 1st sample in the island
        int t_first;

        // length of the island
        int length;

        // a collection of 54 islands in a calorimeter 
        IslandArtRecord[54] calo_trace;

    };

    /* structure for a collection of CaloIslands in a fill (700 us) */
    struct Fill_IslandCollection{

        // Calorimeter number
        int calo_num;

        // Fill number
        int fill_num;

        // t0 of each island determined from the laser calibration
        double t_start[54];

        // vector of CaloIslands in a fill
        std::vector<Calo_IslandArtRecord> fill_trace;

    };

}
