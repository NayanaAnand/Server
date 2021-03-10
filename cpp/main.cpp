#include <iostream>
#include "ossie/ossieSupport.h"

#include "Server.h"
int main(int argc, char* argv[])
{
    Server_i* Server_servant;
    Component::start_component(Server_servant, argc, argv);
    return 0;
}

