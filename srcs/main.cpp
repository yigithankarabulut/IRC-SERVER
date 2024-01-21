#include "../includes/Server.hpp"

int main(int ac, char **av)
{
    try {
        if (ac != 3)
            throw std::runtime_error("./ircserv <port> <password>");
        if (!Server::portIsValid(av[1]))
            throw std::runtime_error("invalid port");
        Server::getInstance()->manageServer(atoi(av[1]), av[2]);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

/*   
1 - TO DO LARI FIXLE
2 - COMMANDS:
* KICK
* MODE FIX
* JOIN FIX
* PART FIX
* NOTICE
* WHOIS
* TOPIC
* USER RPL
* LIST
* PING 
* PONG
* BOT

*/