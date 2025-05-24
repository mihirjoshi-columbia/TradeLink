#include "Orderbook.h"
#include "main_include.h" 
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    
    // use for debugging
    std::string cmdLineInput;
    OrderId cmdLineId;
    std::string cmdLineSide;
    Price cmdLinePrice;
    Quantity cmdLineQuantity;

    std::cout << "Usage: OrderType id side price quantity";
    std::cin >> cmdLineInput >> cmdLineId >> cmdLineSide >> cmdLinePrice >> cmdLineQuantity;
    std::cout << cmdLineInput << cmdLineId << cmdLineSide << cmdLinePrice << cmdLineQuantity << std::endl;

    Orderbook orderbook;
    const OrderId orderId = 1;
    orderbook.AddOrder(std::make_shared<Order>(OrderType::GoodTillCancel, orderId, Side::Buy, 100, 10));
    std::cout << orderbook.Size() << std::endl;
    orderbook.CancelOrder(orderId);
    std::cout << orderbook.Size() << std::endl;
    return 0;
}

