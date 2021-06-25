#pragma once
#include <iostream>

class MainRenderer
{
public:
	MainRenderer()
	{
		std::cout << "Main Rendered " << std::endl;
	}

	virtual ~MainRenderer()
	{

	}
};

