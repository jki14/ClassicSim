#include "EncounterStart.h"

#include "Character.h"
#include "CharacterSpells.h"

EncounterStart::EncounterStart(Character* pchar) {
    this->pchar = pchar;
    this->priority = 0.0;
    this->name = "EncounterStart";
}

void EncounterStart::act() {
    pchar->run_pre_combat_actions();
    pchar->start_attack();
    pchar->perform_rotation();
}
