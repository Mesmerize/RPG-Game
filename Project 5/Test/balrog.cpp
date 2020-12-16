#include "creature.h"
#include "human.h"
#include "elf.h"
#include "demon.h"
#include "cyberdemon.h"
#include "balrog.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace cs_creature
{

string Balrog::getSpecies() const
{
    return "Balrog";
}

int Balrog::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
        damage = Demon::getDamage();		// call demon::getDamage()

        //cout << getSpecies() << " attacks for " << damage << " points!" << endl;

        //cout << getSpecies() << " attacks for " << damage << " points!" << endl;
        if (rand() % 4 == 0)
        {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }

        // Balrogs are so fast they get to attack twice
        int damage2 = (rand() % getStrength()) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;

    return damage;
}

}
