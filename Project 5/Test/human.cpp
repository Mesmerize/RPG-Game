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

string Human::getSpecies() const
{
    return "Human";
}

/*int Human::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
    //damage = (rand() % this->getStrength()) + 1;
    //cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    return damage;
} */


}
