/**
 * @file telemetry.h
 * @brief Handles all telemetry sensors.
 *
 * @author Varadi Gyorgy aka bodri
 * Contact: bodri@bodrico.com
 *
 * @bug No known bugs.
 *
 * MIT license, all text above must be included in any redistribution
 *
 */

#ifndef __TELEMETRY_H__
#define __TELEMETRY_H__

#include "main.h"
#include "sensor.h"
#include "rflink.h"

#include <string>
#include <vector>

class Telemetry {
public:
	Telemetry(std::vector<Sensor *> sensors);

	void processHeartBeat();

	void composeTelemetryPacket(Packet &packet);

private:
	std::vector<Sensor *> sensors { };
};


#endif /* __TELEMETRY_H__ */