//
// Created by Naum Puroski on 16/10/2016.
//

#ifndef FRIENDLYWITHC_DEVICEFACTORY_H_H
#define FRIENDLYWITHC_DEVICEFACTORY_H_H

#include <core/Factory.h>

struct DeviceConfig {
    std::string ip;
    unsigned short port;
};

using DeviceFactory = Factory<Device, DeviceConfig>;

#endif //FRIENDLYWITHC_DEVICEFACTORY_H_H
