#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "ClustAGEPlugin.h"

void ClustAGEPlugin::input(std::string file) {
 inputfile = file;
}

void ClustAGEPlugin::run() {
   
}

void ClustAGEPlugin::output(std::string file) {
	std::string command;
	//spine.pl -f genome_files.txt
   command = "ClustAGE.pl ";
   command += " -f "+inputfile;
   command += " -o "+file;
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<ClustAGEPlugin> ClustAGEPluginProxy = PluginProxy<ClustAGEPlugin>("ClustAGE", PluginManager::getInstance());
