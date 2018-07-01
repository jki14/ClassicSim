#ifndef HAMSTRING_H
#define HAMSTRING_H

#include "Spell.h"

class Warrior;

class Hamstring: public Spell {
public:
    Hamstring(Engine* engine, Character* pchar, CombatRoll* roll);

    void spell_effect() override;
protected:
private:
    Warrior* pchar;
};

#endif // HAMSTRING_H
