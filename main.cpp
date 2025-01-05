#include "Orderbook.h"
#include <iostream>
#include <set>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <limits>
#include <string>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <memory>
#include <variant>
#include <optional>
#include <tuple>
#include <format>
 
int main() {

    Orderbook orderbook;
    const OrderId orderId = 1;
    orderbook.AddOrder(std::make_shared<Order>(OrderType::GoodTillCancel, orderId, Side::Buy, 100, 10));
    std::cout << orderbook.Size() << std::endl;
    orderbook.CancelOrder(orderId);
    std::cout << orderbook.Size() << std::endl;
    return 0;
}


