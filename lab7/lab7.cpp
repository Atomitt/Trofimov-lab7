#include <iostream>
#include "Weather.h"
#include "Service.h"
#include "XmlService.h"

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

}