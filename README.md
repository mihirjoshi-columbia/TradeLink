# Order Matching Engine (WIP)

This project implements an **Order Matching Engine**, which is crucial in financial markets for matching buy and sell orders efficiently. It currently supports features such as order addition, cancellation, and matching, with support for different order types like Good-Till-Cancel and Fill-Or-Kill.

## Features

- **Order Management**:
  - Add new orders to the order book.
  - Cancel existing orders.
  - Modify orders in the order book.
  
- **Matching Logic**:
  - Efficiently matches buy and sell orders based on price and quantity.
  - Handles different order types (`GoodTillCancel`, `FillOrKill`).

- **Order Book Insights**:
  - Provides detailed bid/ask level information.
  - Maintains an organized structure for active orders.

## Objective

The primary objective of this project is to **enable TCP/IP support**. This will allow the order matching engine to:
- Receive and process orders over a network.
- Communicate with multiple clients in real-time.
- Provide a robust foundation for integration with distributed systems.

The TCP/IP implementation will make this project suitable for real-world use cases in financial markets, such as trading platforms and exchanges.

## Tech Stack

- **Language**: C++
- **Libraries Used**:
  - [fmt](https://github.com/fmtlib/fmt): For formatted output.
  - Standard C++ libraries for containers and algorithms.

## How It Works

- **Order Addition**: Orders are added to a price-tiered structure (`bids` and `asks`).
- **Order Matching**: Orders are matched using a priority mechanism, ensuring best prices are matched first.
- **Trade Execution**: Completed trades are recorded and returned as part of the matching process.

## Current Status

The project is currently a **Work In Progress**. Some features and functionalities might not be fully tested or implemented. For example:
- Error handling needs refinement.
- Additional order types and advanced matching algorithms are planned.

## Running the Project

1. Compile the project using a C++20-compatible compiler:
   ```bash
   g++ -std=c++20 main.cpp -o order_matching_engine

