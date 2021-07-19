/*
 * Copyright (c) 2019 - 2021, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * @brief Module implementing simple FIFO queue.
 */

#include "nrf_802154_queue.h"

#include "nrf_802154_assert.h"

void nrf_802154_queue_init(nrf_802154_queue_t * p_queue,
                           void               * p_memory,
                           size_t               memory_size,
                           size_t               item_size)
{
}

void * nrf_802154_queue_push_begin(const nrf_802154_queue_t * p_queue)
{
    return NULL;
}

void nrf_802154_queue_push_commit(nrf_802154_queue_t * p_queue)
{
}

void * nrf_802154_queue_pop_begin(const nrf_802154_queue_t * p_queue)
{
    return NULL;
}

void nrf_802154_queue_pop_commit(nrf_802154_queue_t * p_queue)
{
}

bool nrf_802154_queue_is_empty(const nrf_802154_queue_t * p_queue)
{
    return false;
}

bool nrf_802154_queue_is_full(const nrf_802154_queue_t * p_queue)
{
    return false;
}
