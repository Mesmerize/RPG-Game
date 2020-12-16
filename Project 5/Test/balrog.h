#ifndef BALROG_H
#define BALROG_H

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace cs_creature
{

class Balrog : public Demon
{
    public:
        Balrog(): Demon( )            // initialize to Human, 10 strength, 10 hitpoints
        {

        }
        Balrog(int newStrength, int newHitpoints): Demon(newStrength,newHitpoints )
        {

        }
        int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat

        string getSpecies() const;    // returns the type of the species

};

}

#endif
