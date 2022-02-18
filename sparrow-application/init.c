// Copyright 2022 Blues Inc.  All rights reserved.
// Use of this source code is governed by licenses granted by the
// copyright holder including that found in the LICENSE file.

// Sparrow Header(s)
#include <framework.h>

// Scheduled App Header(s)
#include "bme/bme.h"
#include "button/button.h"
#include "hc-sr04/hc-sr04.h"
#include "pir/pir.h"

void schedAppInit (void) {
<<<<<<< HEAD
    // Will not initialize if BME280 is not detected
    bmeInit();

    // Will not initialize if not a Sparrow Reference Sensor Board
    pirInit();
=======
    // Will automatically disable if BME280 is not detected
    // if (!bmeInit()) {
    //     APP_PRINTF("ERROR: Failed to initialize BME280 application!\r\n");
    // }

    // Will automatically disable if BME application is not detected
    // if (!pirInit()) {
    //     APP_PRINTF("ERROR: Failed to initialize PIR application!\r\n");
    // }
>>>>>>> 62c06a2 (WIP: HC-SR04 Ultrasonic Range Sensor)

    // Reports node identifier and signal health information on button click
    // if (!buttonInit()) {
    //     APP_PRINTF("ERROR: Failed to initialize button application!\r\n");
    // }

    // // Reports distance from sensor
    if (!hcsr04Init()) {
        APP_PRINTF("ERROR: Failed to initialize HC-SR04 application!\r\n");
    }
}
