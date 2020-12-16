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

using namespace cs_creature;

void battleArena(Creature &, Creature &);

int main()
{


	srand(static_cast<unsigned>(time(nullptr)));

	Human h(20, 30);
	Elf e(40, 50);
	Cyberdemon c(60, 70);
	Balrog b(80, 90);

	battleArena (h, e);
	battleArena (c ,b);
	battleArena (e ,b);
	battleArena (h, b);
	battleArena (c, e);



 /*   srand(static_cast<unsigned>(time(nullptr)));

    Human h1;
    Elf e1;
    Cyberdemon c1;
    Balrog b1;

    Human h(20, 30);
    Elf e(40, 50);
    Cyberdemon c(60, 70);
    Balrog b(80, 90);

    Creature h1;
    Creature e1;
    Creature c1;
    Creature b1;

   Creature h(0,20,30);
   Creature e(3,40,50);
   Creature c(1,60,70);
   Creature b(2,80,90);

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

*/

    return 0;
}

void battleArena(Creature &Creature1, Creature &Creature2)
{
    int Creature1HitPoints = Creature1.getHitpoints();
    int Creature2HitPoints = Creature2.getHitpoints();

    cout << "Fight between " << Creature1.getSpecies() << " and "<< Creature2.getSpecies() <<": "<< endl;
    cout << endl;

    while(Creature1HitPoints > 0 && Creature2HitPoints > 0)
    {
        int Creature2Damage = Creature2.getDamage();
        int Creature1Damage = Creature1.getDamage();

		Creature2HitPoints = (Creature2HitPoints - Creature1Damage);
		Creature1HitPoints = (Creature1HitPoints - Creature2Damage);

		if (Creature1HitPoints <= 0 && Creature2HitPoints <= 0)
		{
			cout << "BOTH CREATURES ARE DOWN SOMEONE CALL 911!" << endl;
			cout << endl;
		}
		if (Creature1HitPoints > 0 && Creature2HitPoints <= 0)
 		{	cout << Creature1.getSpecies() << " JUST DESTROYED HIM" << endl;
			cout << endl;
		}
		if (Creature1HitPoints <= 0 && Creature2HitPoints > 0)
		{	cout << Creature2.getSpecies() << " JUST WON" << endl;
			cout << endl;
		}
    }

}

/* SAMPLE OUTPUT:

Fight between Human and Elf:

Elf attacks for 39 points!
Magical attack inflicts 39 additional damage points!
Human attacks for 10 points!
Elf JUST WON

Fight between Cyberdemon and Balrog:

Balrog attacks for 15 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 43 additional damage points!
Cyberdemon attacks for 60 points!
Demonic attack inflicts 50 additional damage points!
BOTH CREATURES ARE DOWN SOMEONE CALL 911!

Fight between Elf and Balrog:

Balrog attacks for 64 points!
Balrog speed attack inflicts 78 additional damage points!
Elf attacks for 26 points!
Magical attack inflicts 26 additional damage points!
Balrog JUST WON

Fight between Human and Balrog:

Balrog attacks for 6 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 2 additional damage points!
Human attacks for 17 points!
Balrog JUST WON

Fight between Cyberdemon and Elf:

Elf attacks for 19 points!
Magical attack inflicts 19 additional damage points!
Cyberdemon attacks for 52 points!
Cyberdemon JUST DESTROYED HIM


Process returned 0 (0x0)   execution time : 0.072 s
Press any key to continue.

*/
