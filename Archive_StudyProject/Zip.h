#pragma once

#include "Archive.h"

class Zip : public Archive
{
public:
	Zip();
	virtual ~Zip() noexcept = default;

	virtual void Pack(const std::string&& file_name) override;
};

