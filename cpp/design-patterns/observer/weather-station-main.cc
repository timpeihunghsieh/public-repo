#include <iostream>
#include <string>

#include "cpp/design-patterns/observer/weather-station.h"

int main(int argc, char** argv) {
  std::cout << "Tim's Weather Station!" << std::endl;

  observer_pattern::WeatherStation weather_station;
  weather_station.PollAndPrint(
      /*humidity=*/10.0, /*temperature=*/11.0, /*pressure=*/12.0);
  weather_station.PollAndPrint(
      /*humidity=*/20.0, /*temperature=*/21.0, /*pressure=*/22.0);
  return 0;
}