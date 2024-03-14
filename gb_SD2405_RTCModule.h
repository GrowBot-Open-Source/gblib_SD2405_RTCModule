<<<<<<< HEAD
#ifndef gb_SD2405_RTCModule_h
#define gb_SD2405_RTCModule_h
=======
/*********************************************************************
 * gb_SD2405_RTCModule.h
 *
 * Copyright (C)    20124   [GrowBot Open Source],
 * GitHub Link :XXXXX
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Description:Implement DFRobot RTC module into the growbot system
 *
 * Product Links：https://www.dfrobot.com/wiki/index.php/Gravity:_I2C_SD2405_RTC_Module_SKU:_DFR0469
 *
 * Sensor driver pin：I2C
 *
 * author  :  GrowBot
 * version :  V1.0
 * date    :  2024-05-14
 **********************************************************************/

#ifndef gb_SD2405_RTCModule.h
#define gb_SD2405_RTCModule.h
>>>>>>> 74d829e8800d3f958d949b9350b0123c715a4dc7

#include <Arduino.h>
#include <GravityRtc.h>

class gb_SD2405_RTCModule
{
private:
    
public:
<<<<<<< HEAD
    String timeStamp;
    void setupRtc();
    String getTime();
=======
    gb_SD2405_RTCModule(){};

    // setup rtc module
    void setupRtc();

    // get timestamp
    void getTime();
>>>>>>> 74d829e8800d3f958d949b9350b0123c715a4dc7
};

#endif