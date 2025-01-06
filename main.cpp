#include "Orderbook.h"
#include "main_include.h" 
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    
    /*
    int portNum;

    std::cin >> portNum;

    //create socket
    int servSocket = socket(AF_INET, SOCK_STREAM, 0);

    // address
    sockadd_in servAddr;
    servAddr.sin_family = AF_INET;
    servAddr.sin_port = htons(portNum);
    servAddr.sin_addr.s_addr = INADDR_ANY;

    // bind
    bind(servSocket, (struct sockaddr*)&servAddr, sizeof(servAddr));

    // listen for max 5 connection
    listen(servSock, 5); 

    // connection request
    int clntSock = accept(servSock, nullptr, nullptr);
    */

    char* ordertype_;
    std::cin >> ordertype_;
    Orderbook orderbook;
    const OrderId orderId = 1;
    orderbook.AddOrder(std::make_shared<Order>(OrderType::GoodTillCancel, orderId, Side::Buy, 100, 10));
    std::cout << orderbook.Size() << std::endl;
    orderbook.CancelOrder(orderId);
    std::cout << orderbook.Size() << std::endl;
    return 0;
}


