// LCMSCP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <httplib.h>


int main()
{
    std::cout << "Hello World!\n";

    httplib::Client client("http://ip.jsontest.com");
    httplib::Headers headers;


    auto res = client.Get("/");

    

    if (res && res->status == 200)
    {
        /*logToFile("API Response:\n" + res->body);*/
        std::cout << "API response:\n" << res->body << std::endl;
    }
    else {
        /*logToFile("Error: unalbe to process te request. \n");*/
        std::cerr << "Error: unalbe to process te request. \n";
        if (res) {
            std::cerr << "status code: " << res->status << std::endl;
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
