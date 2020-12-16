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

string Demon::getSpecies() const
{
    return "Demon";
}

/*int Demon::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
    return damage;
} */

}
