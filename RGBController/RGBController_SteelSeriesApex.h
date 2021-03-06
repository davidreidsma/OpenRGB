/*-----------------------------------------*\
|  RGBController_SteelSeriesApex.cpp        |
|                                           |
|  Generic RGB Interface for SteelSeries    |
|  Apex 7 Keyboard                          |
|                                           |
|  Eric Samuelson (edbgon) 7/5/2020         |
\*-----------------------------------------*/

#pragma once
#include <chrono>

#include "RGBController.h"
#include "SteelSeriesApexController.h"

class RGBController_SteelSeriesApex : public RGBController
{
public:
    RGBController_SteelSeriesApex(SteelSeriesApexController* steelseries_ptr);
    ~RGBController_SteelSeriesApex();

    void        SetupZones();

    void        ResizeZone(int zone, int new_size);
    
    void        DeviceUpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

    void        SetCustomMode();
    void        DeviceUpdateMode();

private:
    SteelSeriesApexController*   steelseries;

    std::chrono::time_point<std::chrono::steady_clock>  last_update_time;
};
