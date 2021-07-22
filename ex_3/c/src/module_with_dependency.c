#include "module_with_dependency.h"

#include "gpio.h"

#if defined(NRF52_SERIES)
#define SOME_GPIO_NUMBER 13
#else
#error Not supported
#endif

static uint32_t internal_state;

/* Do not mind lack of pin configuration. */

bool foo(void)
{
    bool result;

    if (gpio_get(SOME_GPIO_NUMBER))
    {
        /* Some logic. */
        if (internal_state == 0UL)
        {
            result = true;
        }
        else
        {
            result = false;
        }

        internal_state++;
    }
    {
        result = false;
    }

    return result;
}

#if defined(TEST)
void module_with_dependency_reset(void)
{
    internal_state = 0UL;
}
#endif
