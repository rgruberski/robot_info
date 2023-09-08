#pragma once

#include <string>

struct HydraulicSystemData {
  std::string hydraulic_oil_temperature, hydraulic_oil_tank_fill_level,
      hydraulic_oil_pressure;
};

class HydraulicSystemMonitor {
public:
  const HydraulicSystemData get_data();
  void set_data(const std::string hydraulic_oil_temperature,
                const std::string hydraulic_oil_tank_fill_level,
                const std::string hydraulic_oil_pressure);

protected:
  std::string hydraulic_oil_temperature;
  std::string hydraulic_oil_tank_fill_level;
  std::string hydraulic_oil_pressure;
};
