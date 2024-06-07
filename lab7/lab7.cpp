#include <iostream>
#include "Weather.h"
#include "Service.h"
#include "JsonService.h"
#include "XmlService.h"

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	JsonService js;
	Weather w = js.getWeather("weather.json");

}