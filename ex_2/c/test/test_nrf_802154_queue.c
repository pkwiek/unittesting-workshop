#include "unity.h"

/* Module under test. */
#include "nrf_802154_queue.h"

/* Standrd headers. */
#include <stdint.h>
#include <string.h>

/* Just an example. */
#define NUMBER_OF_ELEMENTS  10
#define ELEMENT_SIZE        sizeof(uint32_t)
#define QUEUE_MEMORY_SIZE   (NUMBER_OF_ELEMENTS * ELEMENT_SIZE)

static uint8_t queue_memory[QUEUE_MEMORY_SIZE];

static nrf_802154_queue_t full_queue;

/* Fills queue_memory with zeros. */
static void queue_memory_init(void)
{
    memset(queue_memory, 0U, sizeof(queue_memory));
}

/* Prepares a full queue. */
static void full_queue_init(void)
{
    /* TODO: Make full_queue full. */
}

void setUp(void)
{
    queue_memory_init();
    full_queue_init();
}

void tearDown(void)
{
}

void test_queue_is_created_empty(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement");
}
