# C++ Image Upload Server

## Table of Contents
- [Project Description](#project-description)
- [Technologies Used](#technologies-used)
- [Contact Information](#contact-information)

## <a id="project-description">Project Description</a>
In this project, our team of four undertook the challenge of comprehending application communication by constructing a C++ application from scratch. We implemented sockets and the HTTP protocol to establish communication channels, showcasing our proficiency in handling the entire process of sending and receiving HTTP requests and responses. To deepen our understanding of the underlying mechanisms, we decided to develop our own HTTP classes instead of relying on third-party modules. This academic endeavor took place during my third term at BCIT in a specialized class focused on client-server communication.

The server component of our application is designed with a clear and structured architecture. Incoming requests are received by the server, which then creates a dedicated router thread responsible for parsing the request and determining the appropriate servlet to handle the business logic. Once the request is passed to the servlet, it executes the necessary business logic and sets the returned values in the HTTP Response class. In our case, the Upload Servlet retrieves the image from the request and saves it to the file system. Once the servlet completes its tasks, the HTTP Response object constructs the response, which is then sent back to the client via the socket. On the client side, the response is parsed, and appropriate actions are taken.

It's essential to highlight that this project provided us with a valuable learning experience. It expanded our knowledge of application communication over the network using the HTTP protocol, sockets, multi-threaded programming, and file transfer within a client-server architecture. While the project may not be considered a finalized, production-ready product, it demonstrates our foundational understanding of the concepts and skills necessary for constructing robust and efficient communication systems.

By showcasing this project, my goal is to demonstrate my ability to handle intricate communication processes, comprehend underlying protocols, and develop tailored solutions when required.

## <a id="technologies-used">Technologies Used</a>
#### Languages
- C++

## Contact Information <a id="contact-information">Contact Information</a>

### Ravinder Shokar
- ravindershokar@gmail.com
- https://www.linkedin.com/in/rshokar/
