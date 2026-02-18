// Mohammed Al-Sheikh
// ValleyFarming.cpp

#include <ostream>
#include "Valley.h"

// Initialize all values to 0
Valley::Valley()
: seeds(0), water(0), fertilizer(0), sprouts(0), enrichedSeeds(0), nutrientMix(0), crops(0)
{
    // Nothing Here
}

// Adds num to seeds as long as num is positive
bool Valley::AddSeeds(int num)
{
    if(num < 0)
    {
        return false;
    }
    else
    {
        seeds += num;
        return true;
    }
}

// Adds num to water as long as num is positive
bool Valley::AddWater(int num)
{
    if(num < 0)
    {
        return false;
    }
    else
    {
        water += num;
        return true;
    }
}

// Adds num to fertilizer as long as num is positive
bool Valley::AddFertilizer(int num)
{
    if(num < 0)
    {
        return false;
    }
    else
    {
        fertilizer += num;
        return true;
    }
}

// If 1 seed and 3 waters are available, make sprout and deduct used materials
bool Valley::MakeSprout()
{
    if(seeds >= 1 && water >= 3)
    {
        seeds -= 1;
        water -= 3;
        sprouts += 1;
        return true;
    }
    else
    {
        return false;
    }
}

// If 1 seed and 2 fertilizers are available, make enriched seed and deduct used materials
bool Valley::MakeEnrichedSeed()
{
    if(seeds >= 1 && fertilizer >= 2)
    {
        seeds -= 1;
        fertilizer -= 2;
        enrichedSeeds += 1;
        return true;
    }
    else
    {
        return false;
    }
}

// If 2 waters and 2 fertilizers are available, make nutrient mix and deduct used materials
bool Valley::MakeNutrientMix()
{
    if(water >= 2 && fertilizer >= 2)
    {
        water -= 2;
        fertilizer -= 2;
        nutrientMix += 1;
        return true;
    }
    else
    {
        return false;
    }
}

// If 2 sprouts and 1 nutrient mix are available, make crop and deduct used materials
// Else if 3 waters and 1 enriched seed are available, make crop and deduct used materials
bool Valley::MakeCrop()
{
    if(sprouts >= 2 && nutrientMix >= 1)
    {
        sprouts -= 2;
        nutrientMix -=1;
        crops += 1;
        return true;
    }
    else if(water >= 3 && enrichedSeeds >= 1)
    {
        water -= 3;
        enrichedSeeds -= 1;
        crops += 1;
        return true;
    }
    else
    {
        return false;
    }
}

// If there are 2 crops, call it a season
bool Valley::CanCallItASeason() const
{
    if(crops >= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Display farm status menu w/ respective values
std::ostream& operator<<(std::ostream& out, const Valley& v)
{
    out << "---------------------" << std::endl;
    out << "CURRENT  FARM  STATUS" << std::endl;
    out << "---------------------" << std::endl;
    out << "SEEDS:              " << v.seeds << std::endl;
    out << "WATER:              " << v.water << std::endl;
    out << "FERTILIZER:         " << v.fertilizer << std::endl;
    out << "SPROUTS:            " << v.sprouts << std::endl;
    out << "ENRICHED SEEDS:     " << v.enrichedSeeds << std::endl;
    out << "NUTRIENT MIXES:     " << v.nutrientMix << std::endl;
    out << "CROPS:              " << v.crops << std::endl;

    return out;
}
