#pragma once

#include "Archive.h"

class Rar : public Archive
{
public:
	Rar();
	virtual ~Rar() noexcept = default;
	
	virtual void Pack(const std::string&& file_name) override;
};

