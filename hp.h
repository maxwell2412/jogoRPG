#pragma once
#include "hitpointtypes.h"
class hp{
public:
    void serMaxHP(hptype new_max_hp){
        if (new_max_hp < 1)
            return 0;
        
        MaxHP = CurrentHP;

        if (CurrentHP > MaxHP)
            CurrentHP = MaxHP;
        return true;
    }

    void takeDamage(hptype damage){
        if (damage > CurrentHP){
            CurrentHP = 0;
            return;
        }

        CurrentHP -= damage;
    }
    void heal(hptype amount){
        if (amount + CurrentHP > MaxHP){
            CurrentHP = MaxHP;
            return;
        }

        CurrentHP += amount;
    }


private:
    hptype ShieldHP;
    hptype CurrentHP;
    hptype MaxHP;
};