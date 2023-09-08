#include <robot_info/hydraulic_system_monitor.hpp>

const HydraulicSystemData HydraulicSystemMonitor::get_data() {
  HydraulicSystemData data;
  data.hydraulic_oil_temperature = hydraulic_oil_temperature;
  data.hydraulic_oil_tank_fill_level = hydraulic_oil_tank_fill_level;
  data.hydraulic_oil_pressure = hydraulic_oil_pressure;
  return data;
}

void HydraulicSystemMonitor::set_data(
    const std::string hydraulic_oil_temperature,
    const std::string hydraulic_oil_tank_fill_level,
    const std::string hydraulic_oil_pressure
  ) {
  this->hydraulic_oil_temperature = hydraulic_oil_temperature;
  this->hydraulic_oil_tank_fill_level = hydraulic_oil_tank_fill_level;
  this->hydraulic_oil_pressure = hydraulic_oil_pressure;
}