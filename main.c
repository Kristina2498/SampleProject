#include <ch.h>
#include <hal.h>



int main(void)
{

    halInit();
    chSysInit();


    while (true)
    {
        palToggLine(LINE_LED_GREEN);
        chThdSleepSeconds(1);
    }
}
