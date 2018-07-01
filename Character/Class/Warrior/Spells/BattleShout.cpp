
#include "BattleShout.h"
#include "BattleShoutBuff.h"
#include "Warrior.h"

BattleShout::BattleShout(Engine* engine, Character* pchar, CombatRoll* roll) :
    Spell("Battle Shout", engine, pchar, roll, 0, 10)
{
    this->pchar = dynamic_cast<Warrior*>(pchar);
}

void BattleShout::spell_effect() {
    pchar->get_battle_shout_buff()->apply_buff();

    add_spell_cd_event();
    add_gcd_event();

    pchar->lose_rage(resource_cost);
}
