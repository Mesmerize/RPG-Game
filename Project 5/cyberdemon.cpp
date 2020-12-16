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

string Cyberdemon::getSpecies() const
{
    return "Cyberdemon";
}

int Cyberdemon::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Demon::getDamage();
    //cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    if (rand() % 4 == 0)
    {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }

    return damage;
}

}
