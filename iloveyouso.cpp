#include <iostream>
#include <thread>
#include <chrono>

void print_lyrics() {

    const std::pair<std::string, std::pair<double, bool>> lines[] = {
        {"I'm gonna pack my things", {0.1, false}},
        {"and leave you behind", {0.1, false}},
        {"This feeling's old and I know", {0.1, false}},
        {"that I've made up my mind", {0.08, false}},
        {"I hope you feel what I felt", {0.11, false}},
        {"when you shattered my soul", {0.08, false}},
        {"'Cause you were cruel and I'm a fool", {0.08, false}},
        {"So, please let me go", {0.08, false}},

        {"But I love you so", {0.13, false}},
        {"please let me go", {0.13, false}},
        {"I love you so ", {0.13, false}},
        {"please let me go", {0.13, false}},
        {"I love you so ", {0.13, false}},
        {"please let me go", {0.13, false}},
        {"I love you so ", {0.13, false}}
    };

    const double delays[] = {
        0.8, 0.5, 0.5, 0.5, 0.7, 0.5, 0.5, 2.7,
        1, 0.8, 1, 0.8, 1.1, 0.8, 5
    };

    for (size_t i = 0; i < sizeof(lines) / sizeof(lines[0]); ++i) {
        const auto& [line, properties] = lines[i];
        double char_delay = properties.first;


        for (char c : line) {
            std::cout << c << std::flush;
            std::this_thread::sleep_for(std::chrono::duration<double>(char_delay));
        }


        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::duration<double>(delays[i]));
    }
}

int main() {
    print_lyrics();
    return 0;
}
