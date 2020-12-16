#ifndef DEMON_H
#define DEMON_H

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace cs_creature
{

class Demon : public Creature
{
    public:
        Demon(): Creature( )            // initialize to Human, 10 strength, 10 hitpoints
        {

        }
        Demon(int newStrength, int newHitpoints): Creature(newStrength,newHitpoints )
        {

        }
       // int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat

        string getSpecies() const;    // returns the type of the species

};


}

#endif
