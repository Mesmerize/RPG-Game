#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace cs_creature
{

class Cyberdemon : public Demon
{
    public:
        Cyberdemon(): Demon( )            // initialize to Human, 10 strength, 10 hitpoints
        {

        }
        Cyberdemon(int newStrength, int newHitpoints): Demon(newStrength,newHitpoints )
        {

        }
        int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat

        string getSpecies() const;    // returns the type of the species

};

}

#endif
