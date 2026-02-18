// Mohammed Al-Sheikh
// ValleyFarming.h

#ifndef VALLEY_H
#define VALLEY_H

#include <ostream>

class Valley
{
public:
    Valley();
    
    bool AddSeeds(int num);
    bool AddWater(int num);
    bool AddFertilizer(int num);
    bool MakeSprout();
    bool MakeEnrichedSeed();
    bool MakeNutrientMix();
    bool MakeCrop();
    bool CanCallItASeason() const;
    
    friend std::ostream& operator<<(std::ostream& out, const Valley& v);
    
private:
    int seeds;
    int water;
    int fertilizer;
    int sprouts;
    int enrichedSeeds;
    int nutrientMix;
    int crops;
};

#endif
