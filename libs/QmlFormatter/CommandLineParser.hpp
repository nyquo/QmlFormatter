#pragma once
#include <vector>
#include <string>

class CommandLineParser {
public:
	CommandLineParser() = delete;
	CommandLineParser(int& argc, char** argv);

	const std::string& getCmdOption(const std::string& option) const;

private:
	std::vector<std::string> m_tokens;
};