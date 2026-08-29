#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string>
#include <algorithm>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <fstream>
#include <nlohmann/json.hpp>
#include <thread>
#define PATH  "file.txt"
#define BUFF_SIZE   1024
//this 1st project c++ 
class Socket{
public:
  Socket(uint16_t port,const char* ip):m_myip(ip),m_port(port)
{   
    m_serverSocket=socket(AF_INET, SOCK_STREAM, 0);
     if (m_serverSocket == -1)
    {
        std::cout << "failed to create socket. errno: " << errno << std::endl;
        exit(EXIT_FAILURE);
    }
    

    // 2. Enable SO_REUSEADDR   
    int opt = 1;
    if (setsockopt(m_serverSocket, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
        std::cerr << "setsockopt(SO_REUSEADDR) failed\n";
        close(m_serverSocket);
    }
    
     serverAddress.sin_port=htons(m_port);
     //  serverAddress.sin_addr.s_addr = htonl(INADDR_LOOPBACK); localhost
      serverAddress.sin_family = AF_INET;
     inet_pton(AF_INET, m_myip, &serverAddress.sin_addr);

//////binding//////////
   if (bind(m_serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0)
    {
        std::cout << "failed to bind to port 8080. errno: " << errno << std::endl;
        exit(EXIT_FAILURE);
    }
 /////////////listening to the assigned socket (hold at most 5 connections in queue) + error handling
    if (listen(m_serverSocket, 5) < 0)
    {
        std::cout << "failed to listen in the socket. errno: " << errno << std::endl;
        exit(EXIT_FAILURE);
    }   
// accepting connection request from the queue
    m_addrlen = sizeof(serverAddress);
    m_connection = accept(m_serverSocket, nullptr, nullptr);
    // error handling
    if (m_connection < 0)
    {
        std::cout << "failed to grab a connection. errno: " << errno << std::endl;
        exit(EXIT_FAILURE);
    }   
    }

void rec_send(){
    recv(m_connection, m_buffer_recv, sizeof(m_buffer_recv), 0); // same as read (had added flag)
    std::string str(m_buffer_recv);
    std::cout << "Message from client1: " << m_buffer_recv<< std::endl;
    auto s= str.substr(str.find("{"),str.find("}"));
    //pasring json 
    using json = nlohmann::json;
    json j = json::parse(s);
    std::string command=j["command"];
    std::cout << command << '\n'; // "ls -l"   
    const char* action = command.c_str(); 

    std::system(action);

    std::string myText;
    std::ifstream fd(PATH);

if (!fd.is_open())
{
    std::cerr << "ERROR: cannot open file.txt\n";
}
else
{
    std::cout << "file.txt opened successfully\n";
    std::string line;
    while (std::getline(fd, line))
    {
        std::cout << "LINE:"<< line <<"\n";
        myText += line;
        myText += "\n";
    }

    fd.close();
}

 std::string response =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/plain\r\n"
        "Content-Length: " +
        std::to_string(myText.size()) +
        "\r\n"
        "Connection: close\r\n"
        "\r\n"
        + myText;
        // Send request
    send(m_connection, response.c_str(), response.size(), 0); 
}

void closed(){
     close(m_connection);
    close(m_serverSocket);
}

private:
 int m_serverSocket;
 sockaddr_in serverAddress;
 unsigned long m_addrlen ;
 int m_connection;
 uint16_t m_port;
 char m_buffer_recv[BUFF_SIZE] = {0};
const char * m_myip;
};

int  main(int argc, const char** argv) {
 Socket s(8080,"192.168.0.111");
 s.rec_send();
 s.closed();
 return 0;
}