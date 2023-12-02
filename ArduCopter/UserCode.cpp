#include "Copter.h"

#ifdef USERHOOK_INIT
void Copter::userhook_init()
{

}
#endif

#ifdef USERHOOK_FASTLOOP
void Copter::userhook_FastLoop()
{
    #include <AP_HAL/AP_HAL.h>

    // we need a boardconfig created so that the io processor's enable
    // parameter is available
    #if CONFIG_HAL_BOARD == HAL_BOARD_CHIBIOS
    #include <AP_BoardConfig/AP_BoardConfig.h>
    #include <AP_IOMCU/AP_IOMCU.h>
    AP_BoardConfig BoardConfig;
    #endif

    void setup();
    void loop();

    const AP_HAL::HAL& hal = AP_HAL::get_HAL();

    void setup (void)
    {
        hal.console->printf("Starting AP_HAL::RCOutput test\n");
    #if CONFIG_HAL_BOARD == HAL_BOARD_CHIBIOS
        BoardConfig.init();
    #endif
        for (uint8_t i = 0; i< 14; i++) {
            hal.rcout->enable_ch(i);
        }
    }

    static uint16_t pwm = 1500;
    static int8_t delta = 1;

    void loop (void)
    {
        for (uint8_t i=0; i < 14; i++) {
            hal.rcout->write(i, pwm);
            pwm += delta;
            if (delta > 0 && pwm >= 2000) {
                delta = -1;
                hal.console->printf("decreasing\n");
            } else if (delta < 0 && pwm <= 1000) {
                delta = 1;
                hal.console->printf("increasing\n");
            }
        }
        hal.scheduler->delay(5);
    }

    AP_HAL_MAIN();

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
    // put your 3.3Hz code here
}
#endif

#ifdef USERHOOK_SUPERSLOWLOOP
void Copter::userhook_SuperSlowLoop()
{
    // put your 1Hz code here
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
