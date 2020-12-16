#ifndef CREATURE_H
#define CREATURE_H

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace cs_creature
{

class Creature
{
    private:
        //int type;               // 0 Human, 1 Cyberdemon, 2 Balrog, 3 elf
        int strength;           // how much damage this Creature inflicts
        int hitpoints;          // how much damage this Creature can sustain
        //string getSpecies() const;    // returns the type of the species
    public:
        Creature();             // initialize to Human, 10 strength, 10 hitpoints
        Creature(int newStrength, int newHitpoints);
       virtual int getDamage() const;         // returns the amount of damage this Creature
                                 // inflicts in one round of combat

        virtual string getSpecies() const;
        // also include appropriate accessors and mutators

        int getStrength() const;
        void setStrength(int);

        int getHitpoints() const;
        void setHitpoints(int);
};

}

#endif
