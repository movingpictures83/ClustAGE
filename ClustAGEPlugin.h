#ifndef CLUSTAGEPLUGIN_H
#define CLUSTAGEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class ClustAGEPlugin : public Plugin
{
public: 
 std::string toString() {return "ClustAGE";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
