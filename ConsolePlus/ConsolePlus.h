#pragma once
#include <iostream>
#include <Windows.h>
#include "ClearConsole.h"
#include <stdio.h>
#include <stdlib.h>
#include "Color.h"

namespace console 
 {

	void clear();

	void delayClear(int time);

	void space();

	void typingText(std::string message);

	void Epilepsy(std::string message);

	// void rainbowText(std::string message);


}