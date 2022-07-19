#include "liblist.h"

int main(int argc, char const *argv[])
{
    std::string msg = "Hello, World!";
    printMsg(msg);
    msg = "Messaging from output function...";
    printMsg(msg);
    return 0;
}
