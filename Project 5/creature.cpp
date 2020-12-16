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

Creature::Creature()
{
    strength = 10;
    hitpoints = 10;
}

Creature::Creature( int newStrength, int newHitpoints)
{
    strength = newStrength;
    hitpoints = newHitpoints;
}

int Creature::getStrength() const
{
    return strength;
}

void Creature::setStrength(int s)
{
    strength = s;
}

int Creature::getHitpoints() const
{
    return hitpoints;
}

void Creature::setHitpoints(int hp)
{
    hitpoints = hp;
}

string Creature::getSpecies() const
{
    return "unknown";
}

int Creature::getDamage() const {
    int damage;


        // All Creatures inflict damage which is a random number up to their strength
        damage = (rand() % strength) + 1;
        cout << getSpecies() << " attacks for " << damage << " points!" << endl;

/*
    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    // Demons can inflict damage of 50 with a 25% chance
    if (type == 2 || type == 1){
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
    }

    // Elves inflict double magical damage with a 50% chance
    if (type == 3) {
        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= 2;
        }
    }

    // Balrogs are so fast they get to attack twice
    if (type == 2) {
        int damage2 = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;
    }
 */
    return damage;
}

}
