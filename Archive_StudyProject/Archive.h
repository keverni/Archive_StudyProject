#pragma once

#include <string>

enum class ArchiveType
{
	Tar = 0,
	Zip,
	Rar,
};

class Archive
{
public:
	explicit Archive(ArchiveType type);
	virtual ~Archive() noexcept = default;

	ArchiveType GetType() const noexcept;
	std::string GetTypeStr() const noexcept;

	virtual void Pack(const std::string&& file_name) = 0;

private:
	ArchiveType m_Type{};
};
