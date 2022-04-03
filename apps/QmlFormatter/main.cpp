#include <iostream>

#include <CommandLineParser.hpp>

int main(int argc, char* argv[])
{
  std::cout << "QmlFormatter!" << std::endl;

  CommandLineParser cmdLineParser(argc, argv);

  const std::string optionF = cmdLineParser.getCmdOption("-f");
  if(!optionF.empty())
  {
	  std::cout << "Option -f : " << optionF << std::endl;
  }
  else {
	  std::cout << "No option -f" << std::endl;
  }

  return 0;
}