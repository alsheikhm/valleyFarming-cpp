// Mohammed Al-Sheikh
// mainVF.cpp

#include <iostream>
#include "Valley.h"

// Seeds, water, and fertilizers are foundational resourses
// 1 seed    and 3 water         => 1 sprout
// 1 seed    and 2 fertilizers   => 1 enriched seed
// 2 water   and 2 fertilizers   => 1 nutrient max
// 2 sprouts and 1 nutrient mix  => 1 crop
// 3 water   and 1 enriched seed => 1 crop

int PrintAndGetMenuInput(const Valley& v)
{
	std::cout << v;
	std::cout << std::endl;
	std::cout << "1) Add seeds" << std::endl;
	std::cout << "2) Add water" << std::endl;
	std::cout << "3) Add fertilizer" << std::endl;
	std::cout << "4) Make 1 sprout" << std::endl;
	std::cout << "5) Make 1 enriched seed" << std::endl;
	std::cout << "6) Make 1 nutrient mix" << std::endl;
	std::cout << "7) Make 1 crop" << std::endl;
	std::cout << "8) End program immediately" << std::endl;
	
	int option;
	do
	{
		std::cout << "CHOICE: ";
		std::cin >> option;
	} while ((option < 1) || (option > 8));
	std::cout << std::endl;

	return option;
}

void AddSeeds(Valley& v)
{
	int NUMBER = -1 + (rand() % 6);
	bool worked = v.AddSeeds(NUMBER);
	
	if (worked)
		std::cout << NUMBER << " seeds added to inventory" << std::endl;
	else
		std::cout << NUMBER << " seeds WERE NOT added to inventory" << std::endl;
	
	std::cout << std::endl;
}

void AddWater(Valley& v)
{
	int NUMBER = -1 + (rand() % 6);
	bool worked = v.AddWater(NUMBER);
	
	if (worked)
		std::cout << NUMBER << " waters added to inventory" << std::endl;
	else
		std::cout << NUMBER << " waters WERE NOT added to inventory" << std::endl;
	
	std::cout << std::endl;
}

void AddFertilizer(Valley& v)
{
	int NUMBER = -1 + (rand() % 6);
	bool worked = v.AddFertilizer(NUMBER);
	
	if (worked)
		std::cout << NUMBER << " fertilizers added to inventory" << std::endl;
	else
		std::cout << NUMBER << " fertilizers WERE NOT added to inventory" << std::endl;
	
	std::cout << std::endl;
}

void MakeSprout(Valley& v)
{
	bool worked = v.MakeSprout();
	
	if (worked)
		std::cout << "1 sprout made from 1 seed and 3 waters" << std::endl;
	else
		std::cout << "NOT ENOUGH RESOURCES to make a sprout" << std::endl;
	
	std::cout << std::endl;
}

void MakeEnrichedSeed(Valley& v)
{
	bool worked = v.MakeEnrichedSeed();
	
	if (worked)
		std::cout << "1 enriched seed made from 1 seed and 2 fertilizers" << std::endl;
	else
		std::cout << "NOT ENOUGH RESOURCES to make an enriched seed" << std::endl;
	
	std::cout << std::endl;
}

void MakeNutrientMix(Valley& v)
{
	bool worked = v.MakeNutrientMix();
	
	if (worked)
		std::cout << "1 nutrient mix made from 2 waters and 2 fertilizers" << std::endl;
	else
		std::cout << "NOT ENOUGH RESOURCES to make a nutrient mix" << std::endl;
	
	std::cout << std::endl;
}

void MakeCrop(Valley& v)
{
	bool worked = v.MakeCrop();
	
	if (worked)
		std::cout << "1 crop made from some of your resources" << std::endl;
	else
		std::cout << "NOT ENOUGH RESOURCES to make a crop" << std::endl;
	
	std::cout << std::endl;
}

int main()
{
	Valley v;
	
	int option = 0;
	while ((option != 8) && (v.CanCallItASeason() == false))
	{
		option = PrintAndGetMenuInput(v);
		
		if (option == 1)
			AddSeeds(v);
		else if (option == 2)
			AddWater(v);
		else if (option == 3)
			AddFertilizer(v);
		else if (option == 4)
			MakeSprout(v);
		else if (option == 5)
			MakeEnrichedSeed(v);
		else if (option == 6)
			MakeNutrientMix(v);
		else if (option == 7)
			MakeCrop(v);
	} 

	if (v.CanCallItASeason())
	{
		std::cout << v;
		std::cout << std::endl;
		std::cout << "All crops have been completed!  Season over!" << std::endl;
		std::cout << std::endl;
	}

	std::cout << "Thank you for visiting the valley!" << std::endl;

	return 0;
}
