#include <iostream>
#include <string>
#include <stack>

int main() {

    std::string text, arg;
    int cmd;
    std::stack<std::string> history;
    
    std::cin >> cmd;
    while (std::cin >> cmd) {
        switch (cmd) {
            case 1: // Append
                std::cin >> arg;
                history.push(text);
                text.append(arg);
                break;
            case 2: // Erase
                std::cin >> cmd;
                history.push(text);
                text.erase(text.length() - cmd);
                break;
            case 3: // Get
                std::cin >> cmd;
                std::cout << text[cmd - 1] << '\n';
                break;
            case 4: // Undo
                text = std::move(history.top());
                history.pop();
                break;
        }        
    }
    return 0;
}