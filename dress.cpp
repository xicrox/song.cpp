#include <iostream>
#include <thread>
#include <chrono>

void countdown(int seconds) {
    std::cout << "Starting in: ";
    for (int i = seconds; i > 0; --i) {
        std::cout << i << " " << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << std::endl;
}

void print_lyrics() {
    const std::pair<std::string, std::pair<double, bool>> lines[] = {
        {"Flashback when you met me", {0.05, false}},
        {"Your buzzcut and my hair bleached", {0.05, false}},
        {"Even in my worst times", {0.07, false}},
        {"You could see the best of me", {0.06, false}},
        {"Flashback to my mistakes", {0.07, false}},
        {"My rebounds, my earthquakes", {0.06, false}},
        {"Even in my worst lies", {0.07, false}},
        {"You saw the truth in me", {0.07, false}},
        {"And I woke up just in time", {0.06, false}},
        {"Now I wake up by your side", {0.05, false}},
        {"My one and only, my lifeline", {0.05, false}}, // Change this delay later
        {"I woke up just in time", {0.06, false}},
        {"Now I wake up by your side", {0.05, false}},
        {"My hands shake, I can't explain this", {0.05, false}},
        {"ah, ha, ha, ha", {0.1, false}},
        {"Say my name and everything just stops", {0.07, false}},
        {"I don't want you like a best friend", {0.05, false}},
        {"Only bought this dress so you could take it off", {0.05, false}},
        {"Take it off", {0.05, false}},
        {"ah, ha, ha, ha", {0.1, false}},
        {"Carve your name into my bedpost", {0.07, false}},
        {"'Cause I don't want you like a best friend", {0.05, false}},
        {"Only bought this dress so you could take it off", {0.05, false}},
        {"Take it off", {0.05, false}},
    };

    const double delays[] = {
        0.1, 0.2, 0.2, 0.3, 0.1, 0.2, 0.3, 0.2,
        0.1, 2.6, 0.5, 0.5, 0.1, 0.1, 1.8, 1.8, 0.7 , 0.6, 0.1, 1.7, 1.9, 0.6, 1.7
    };

    for (size_t i = 0; i < sizeof(lines) / sizeof(lines[0]); ++i) {
        const auto& [line, properties] = lines[i];
        double char_delay = properties.first;
        bool is_colored = properties.second;

        if (is_colored) {
            std::cout << "\033[91m";  // Start colored text (red)
        }

        // Print each character with a delay
        for (char c : line) {
            std::cout << c << std::flush;  // Flush output to show characters immediately
            std::this_thread::sleep_for(std::chrono::duration<double>(char_delay));
        }

        if (is_colored) {
            std::cout << "\033[0m";  // Reset color
        }

        // Wait before the next line
        std::this_thread::sleep_for(std::chrono::duration<double>(delays[i]));
        std::cout << std::endl;  // Move to the next line
    }
}

int main() {
    countdown(5);  // Add a 5-second countdown before starting the lyrics
    print_lyrics();
    return 0;
}
