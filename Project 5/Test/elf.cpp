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

string Elf::getSpecies() const
{
    return "Elf";
}

int Elf::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
    //cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    if ((rand() % 2) == 0)
    {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
    }

    return damage;
}

}
