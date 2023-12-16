#include "Copter.h"

#ifdef USERHOOK_INIT
void Copter::userhook_init()
{
    motors->armed(true);
    motors->set_dt(1.0/400.0);
    motors->set_update_rate(490);
    motors->output_min();


}

#endif

#ifdef USERHOOK_FASTLOOP
void Copter::userhook_FastLoop()
{
        hal.console->printf("working!\n");
}
#endif

#ifdef USERHOOK_50HZLOOP
void Copter::userhook_50Hz()
{
    // put your 50Hz code here
}
#endif

#ifdef USERHOOK_MEDIUMLOOP
void Copter::userhook_MediumLoop()
{
    // put your 10Hz code here
}
#endif

#ifdef USERHOOK_SLOWLOOP
void Copter::userhook_SlowLoop()
{
    uint16_t k = 1000;
    for(int i = 1; i < 6; ++i)
    {if(k <= 1800)
    {k += 10;
    motors->output_test_seq(i, k);}
    }

}
#endif

#ifdef USERHOOK_SUPERSLOWLOOP
void Copter::userhook_SuperSlowLoop()
{
    for(int i = 1; i < 6; ++i)
    {motors->output_test_seq(i, 1500);}
}
#endif

#ifdef USERHOOK_AUXSWITCH
void Copter::userhook_auxSwitch1(const RC_Channel::AuxSwitchPos ch_flag)
{
    // put your aux switch #1 handler here (CHx_OPT = 47)
}

void Copter::userhook_auxSwitch2(const RC_Channel::AuxSwitchPos ch_flag)
{
    // put your aux switch #2 handler here (CHx_OPT = 48)
}

void Copter::userhook_auxSwitch3(const RC_Channel::AuxSwitchPos ch_flag)
{
    // put your aux switch #3 handler here (CHx_OPT = 49)
}
#endif
