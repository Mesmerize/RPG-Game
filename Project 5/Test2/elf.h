#ifndef ELF_H
#define ELF_H

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace cs_creature
{

class Elf : public Creature
{
    public:
        Elf(): Creature( )            // initialize to Human, 10 strength, 10 hitpoints
        {

        }
        Elf(int newStrength, int newHitpoints): Creature(newStrength,newHitpoints )
        {

        }
        int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat

        string getSpecies() const;    // returns the type of the species

};

}

#endif
