#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

//Class specifications

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
        int getDamage() const;         // returns the amount of damage this Creature
                                 // inflicts in one round of combat

        string getSpecies() const;
        // also include appropriate accessors and mutators

        int getStrength() const;
        void setStrength(int);

        int getHitpoints() const;
        void setHitpoints(int);
};

class Human : public Creature
{
    public:
        Human(): Creature( )            // initialize to Human, 10 strength, 10 hitpoints
        {

        }
        Human(int newStrength, int newHitpoints): Creature(newStrength,newHitpoints )
        {

        }
        int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat

        string getSpecies() const;    // returns the type of the species
};

class Elf : public Creature
{
    public:
        Elf(): Creature( )            // initialize to Human, 10 strength, 10 hitpoints
        {

        }
        Elf(int newStrength, int newHitpoints): Creature(newStrength,newHitpoints )
        {

        }
        int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat

        string getSpecies() const;    // returns the type of the species

};

class Demon : public Creature
{
    public:
        Demon(): Creature( )            // initialize to Human, 10 strength, 10 hitpoints
        {

        }
        Demon(int newStrength, int newHitpoints): Creature(newStrength,newHitpoints )
        {

        }
        int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat

        string getSpecies() const;    // returns the type of the species

};

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

//Class Implementations

string Human::getSpecies() const
{
    return "Human";
}

int Human::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % this->getStrength()) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    return damage;
}

string Elf::getSpecies() const
{
    return "Elf";
}

int Elf::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    if ((rand() % 2) == 0)
    {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
    }

    return damage;
}

string Demon::getSpecies() const
{
    return "Demon";
}

int Demon::getDamage() const
{
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
    return damage;
}

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
     cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    if (rand() % 4 == 0)
    {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }

    return damage;
}

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

         cout << getSpecies() << " attacks for " << damage << " points!" << endl;
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
        // cout << getSpecies() << " attacks for " << damage << " points!" << endl;
/*

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

//Client code

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    Human h1;
    Elf e1;
    Cyberdemon c1;
    Balrog b1;

    Human h(20, 30);
    Elf e(40, 50);
    Cyberdemon c(60, 70);
    Balrog b(80, 90);

  /*  Creature h1;
    Creature e1;
    Creature c1;
    Creature b1;

   Creature h(0,20,30);
   Creature e(3,40,50);
   Creature c(1,60,70);
   Creature b(2,80,90); */

    cout << "default Human strength/hitpoints: " << h1.getStrength() << "/" << h1.getHitpoints() << endl;
    cout << "default Elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
    cout << "default Cyberdemon strength/hitpoints: " << c1.getStrength() << "/" << c1.getHitpoints() << endl;
    cout << "default Balrog strength/hitpoints: " << b1.getStrength() << "/" << b1.getHitpoints() << endl;
    cout << "non-default Human strength/hitpoints: " << h.getStrength() << "/" << h.getHitpoints() << endl;
    cout << "non-default Elf strength/hitpoints: " << e.getStrength() << "/" << e.getHitpoints() << endl;
    cout << "non-default Cyberdemon strength/hitpoints: " << c.getStrength() << "/" << c.getHitpoints() << endl;
    cout << "non-default Balrog strength/hitpoints: " << b.getStrength() << "/" << b.getHitpoints() << endl;
    cout << endl << endl;

    cout << "Examples of " << h.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;



    cout << "Examples of " << e.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;



    cout << "Examples of " << c.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;



    cout << "Examples of " << b.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++)
    {
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;



    return 0;
}
