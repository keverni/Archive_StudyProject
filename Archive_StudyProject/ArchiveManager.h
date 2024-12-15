#pragma once

#include "Archive.h"
#include <vector>
#include <memory>

class ArchiveManager
{
public:
	ArchiveManager();

	void Pack(std::string&& file_name, ArchiveType&& type);

	ArchiveType GetType(std::string&& type);

private:
	std::vector<std::unique_ptr<Archive>> m_Archives{};
};
