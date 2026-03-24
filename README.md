# CPP01

C++ Module 01: memory allocation, references vs pointers, file stream I/O, and function pointer dispatch — seven exercises from Zombie classes to a Harl log filter.

## Project Overview
- What it does: explores C++ memory management and reference semantics through practical exercises.
- Core themes: stack vs heap, reference members vs pointer members, file I/O with `fstream`, function pointer arrays.

## Architecture & Design
- **ex00-01 (Zombie/ZombieHorde)**: `Zombie` class with heap allocation (`newZombie`) vs stack (`randomChump`); `zombieHorde` allocates N zombies in a single `new[]`.
- **ex02**: demonstrates that references and pointers to the same variable share the same address.
- **ex03 (Weapon/HumanA/HumanB)**: `HumanA` holds a `Weapon&` (always armed); `HumanB` holds a `Weapon*` (optionally armed). Shows reference vs pointer member semantics.
- **ex04 (sed)**: reads a file, replaces all occurrences of `s1` with `s2`, writes to `<filename>.replace`. Uses `std::ifstream`/`std::ofstream`.
- **ex05-06 (Harl)**: `Harl` class with `DEBUG/INFO/WARNING/ERROR` levels dispatched via function pointer array. ex06 adds a `switch`-based filter (Harl 2.0).

## Core Concepts (with code)
- Reference vs pointer member:
```cpp
// HumanA holds a reference (must be set at construction)
class HumanA {
    Weapon& weapon;
public:
    HumanA(std::string name, Weapon& weapon);
};
// HumanB holds a pointer (can be NULL)
class HumanB {
    Weapon* weapon;
public:
    void setWeapon(Weapon& weapon);
};
```
- Function pointer dispatch:
```cpp
// Harl.cpp — pointer-to-member-function array
void (Harl::*funcs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
```

## Code Walkthrough
1) ex00-01: Zombie constructor/destructor announce creation/destruction; demonstrates lifetime differences.
2) ex03: HumanA attack always works; HumanB attack checks for NULL weapon.
3) ex04: open input file, read content, find-replace loop, write to `.replace` file.
4) ex05-06: Harl maps level string to function pointer index; ex06 uses `switch` fallthrough for ">= level" filtering.

## Installation & Setup
- `make` per exercise directory (C++98 flags).

## Technical Deep Dive
- `new[]` + `delete[]` in ZombieHorde — single allocation for array of objects.
- File I/O avoids `std::string::replace` (forbidden); uses manual find-and-rebuild.
- Harl's function pointer array avoids if-else chains — O(1) dispatch.

## Improvements & Future Work
- Add RAII wrapper for file handles in ex04.
- Add unit tests for Harl filter edge cases.

## Author
Oualid Obbad (@oualidobbad)