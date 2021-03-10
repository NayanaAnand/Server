#ifndef SERVER_I_IMPL_H
#define SERVER_I_IMPL_H

#include "Server_base.h"

class Server_i : public Server_base
{
    ENABLE_LOGGING
    public:
        Server_i(const char *uuid, const char *label);
        ~Server_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // SERVER_I_IMPL_H
