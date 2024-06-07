#include <iostream>
#include "Weather.h"
#include "JsonService.h"
#include "Service.h"

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
}