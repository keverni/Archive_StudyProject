#pragma once

#include "Archive.h"

class Zip : public Archive
{
public:
	Zip();
	virtual ~Zip();

	virtual void Pack(std::string&& file_name) override;
};

