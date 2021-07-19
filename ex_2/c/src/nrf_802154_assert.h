#ifndef NRF_802154_ASSERT_H__
#define NRF_802154_ASSERT_H__

#ifndef TEST

#include <assert.h>

#else

#include "CException.h"

#define assert(condition) if (!(condition)) Throw(0)

#endif

#endif // NRF_802154_ASSERT_H__
