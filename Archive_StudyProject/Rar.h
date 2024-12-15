#pragma once

#include "Archive.h"

class Rar : public Archive
{
public:
	Rar();
	virtual ~Rar();
	
	virtual void Pack(std::string&& file_name) override;
};

