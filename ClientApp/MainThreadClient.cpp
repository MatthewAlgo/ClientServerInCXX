#include "ClientHeader.h"
#include <iostream>

int main() {
	MatthewsNamespace::ClientClass* MyClient;
	MyClient = new MatthewsNamespace::ClientClass("127.0.0.1", "1337"); // Endpoint pair
	std::cin.get();
}