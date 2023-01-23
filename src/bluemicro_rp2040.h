// SPDX-FileCopyrightText: 2023 BlueMicro_RP2040_Arduino_Library contributors (https://github.com/jpconstantineau/BlueMicro_RP2040_Arduino_Library/graphs/contributors)
//
// SPDX-License-Identifier: BSD-3-Clause

#ifndef BLUEMICRO_RP2040_H
#define BLUEMICRO_RP2040_H
#include <Arduino.h>
#include <cstdint>
#include <vector>
#include <bluemicro_hid.h>


/**************************************************************************************************************************/
template < size_t N1,  size_t N2>
trigger_keys_t scanMatrix_C2R(trigger_keys_t activeKeys,  const byte (&rows)[N1], const byte (&columns)[N2] )
{
    return activeKeys;
}

/**************************************************************************************************************************/
template < size_t N1,  size_t N2>
trigger_keys_t scanMatrix_R2C(trigger_keys_t activeKeys,  const byte (&rows)[N1], const byte (&columns)[N2] )
{
    return activeKeys;
}






#endif // BLUEMICRO_RP2040_H