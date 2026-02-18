# valleyFarming-cpp
Valley Farming Simulator

# Overview

Valley Farming Simulation is a console-based C++ program that models a simplified farming economy built around structured resource management and crafting logic. The player gathers foundational resources (seeds, water, and fertilizer) and strategically converts them into higher-tier items, ultimately producing crops.

The objective of the simulation is to efficiently manage inventory and grow two crops, which marks a successful farming season.

# Game Mechanics

The system tracks a 7-item inventory:

- Seeds  
- Water  
- Fertilizer  
- Sprouts  
- Enriched Seeds  
- Nutrient Mix  
- Crops  

# Resource Conversion Rules

The simulation implements deterministic crafting logic:

- 1 Seed + 3 Water → 1 Sprout
- 1 Seed + 2 Fertilizer → 1 Enriched Seed
- 2 Water + 2 Fertilizer → 1 Nutrient Mix
- 2 Sprouts + 1 Nutrient Mix → 1 Crop
- 3 Water + 1 Enriched Seed → 1 Crop

Multiple production paths for crops introduce strategic decision-making and resource prioritization.

# Core Concepts Applied

- Object-Oriented Programming (OOP)
- Encapsulation of inventory state
- Deterministic rule-based state transitions
- Guard conditions to prevent invalid resource conversions
- Input validation (rejects negative resource additions)
- Operator overloading for structured console output

# Class Design

The "Valley" class maintains private member variables for all inventory items and exposes controlled public methods to:

- Add foundational resources
- Perform crafting conversions
- Check win conditions
- Display formatted inventory status

All state transitions are handled through validated member functions to ensure consistent and predictable behavior.

# How to Run

1. Compile the program using a C++ compiler (e.g., g++, clang++)
2. Run the executable
3. Interact with the simulation via the console
4. Continue gathering and crafting resources until two crops are produced
