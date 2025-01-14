//
// Created by Admin on 2022-10-31.
//

#include "Router.hpp"
#include <unistd.h>

#include "../servlets/UploadServlet.hpp"

Router::Router(Socket *sock) : Thread(this)
{
    request.setSocket(sock);
    request.parse();

    // All input from socket is read at this point.
    this->sock = sock;
}

void Router::run()
{
    // TODO route thread
    UploadServlet endPoint;

    switch (request.getMethod())
    {
        case 0:
        endPoint.doGet(request, response);
        break;
        case 1:
        endPoint.doPost(request, response);
        break;
    default:;
    }

    string res = response.getResponse();
    char responseCharArray[res.length()];
    strncpy(responseCharArray, res.c_str(), res.length());
    sock->sendResponse(responseCharArray);
}

Router::~Router()
{
    delete sock;
}
