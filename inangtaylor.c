#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <vector>

void playSong(const std::string& songPath) {
    ShellExecute(0, "open", songPath.c_str(), 0, 0, SW_SHOW);
}

int main() {
    std::string songPath = "D:\\Users\\acsba\\Document\\Dress_taylor swift.mp3"; // Your song path
    playSong(songPath);

    // Lyrics
    std::vector<std::string> lyrics = {
        "Our secret moments in your crowded room",
        "They got no idea about me and you",
        "There is an indentation in the shape of you",
        "Made your mark on me, a golden tattoo",
        "All of this silence and patience, pining in anticipation",
        "My hands are shaking from holding back from you (ah, ah, ah)",
        "All of this silence and patience, pining and desperately waiting",
        "My hands are shaking from all this (ah, ha, ha, ha)",
        "Say my name and everything just stops",
        "I don't want you like a best friend",
        "Only bought this dress so you could take it off",
        "Take it off",
        "Carve your name into my bedpost",
        "'Cause I don't want you like a best friend",
        "Only bought this dress so you could take it off",
        "Take it off",
        "Inescapable, I'm not even gonna try",
        "And if I get burned, at least we were electrified",
        "I'm spilling wine in the bathtub",
        "You kiss my face and we're both drunk",
        "Everyone thinks that they know us",
        "But they know nothing about",
        "All of this silence and patience, pining in anticipation",
        "My hands are shaking from holding back from you (ah, ah, ah)",
        "All of this silence and patience, pining and desperately waiting",
        "My hands are shaking from all this (ah, ha, ha, ha)",
        "Say my name and everything just stops",
        "I don't want you like a best friend",
        "Only bought this dress so you could take it off",
        "Take it off",
        "Carve your name into my bedpost",
        "'Cause I don't want you like a best friend",
        "Only bought this dress so you could take it off",
        "Take it off",
        "Only bought this dress so you could take it off",
        "Only bought this dress so you could take it off",
        "Flashback when you met me",
        "Your buzzcut and my hair bleached",
        "Even in my worst times",
        "You could see the best of me",
        "Flashback to my mistakes",
        "My rebounds, my earthquakes",
        "Even in my worst lies",
        "You saw the truth in me",
        "And I woke up just in time",
        "Now I wake up by your side",
        "My one and only, my lifeline",
        "I woke up just in time",
        "Now I wake up by your side",
        "My hands shake, I can't explain this ah, ha, ha, ha",
        "Say my name and everything just stops",
        "I don't want you like a best friend",
        "Only bought this dress so you could take it off",
        "Take it off",
        "Carve your name into my bedpost",
        "'Cause I don't want you like a best friend",
        "Only bought this dress so you could take it off",
        "Take it off",
        "There is an indentation in the shape of you",
        "Only bought this dress so you could take it off",
        "You made your mark on me, golden tattoo",
        "Only bought this dress so you could take it off"
    };

    // Print lyrics while the song plays
    for (const auto& line : lyrics) {
        std::cout << line << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3)); // Adjust timing as needed
    }

    return 0;
}
