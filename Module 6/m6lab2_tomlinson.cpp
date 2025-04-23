// CSC 134
// m6 lab 2
// Wendy "Lee" Tomlinson
// april 23 2025

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    CAMP_ENTRANCE = 0,
    AMPITHEATRE = 1,
    SHED = 2,
    DINING_PAVILION = 3,
    MAIN_HOUSE = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Camp Entrance",
        "Ampitheatre",
        "Shed",
        "Dining Pavilion",
        "Main House"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "A wide path through a pine grove with worn out signage for each connecting trail.",
        "Wooden benches in a circle around a forgotten stage. The air is frigid.",
        "A leaning shack with dusty windows and abandoned canoes and...ancient greek weaponry?",
        "An overgrown collection of crumbling concrete picnic tables.",
        "A looming cabin with a sagging roof that gives you the feeling of being watched."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Entrance Hall connections
    connections[CAMP_ENTRANCE][NORTH] = AMPITHEATRE;    // Entrance Hall -> North -> AMPITHEATRE
    connections[CAMP_ENTRANCE][EAST] = SHED;     // Entrance Hall -> East -> SHED
    connections[CAMP_ENTRANCE][SOUTH] = -1;         // No connection south
    connections[CAMP_ENTRANCE][WEST] = DINING_PAVILION;      // Entrance Hall -> West -> DINING_PAVILION
    
    // AMPITHEATRE connections
    connections[AMPITHEATRE][NORTH] = DINING_PAVILION;   // AMPITHEATRE -> North -> dining pavilion
    connections[AMPITHEATRE][EAST] = -1;                // No connection east
    connections[AMPITHEATRE][SOUTH] = CAMP_ENTRANCE;    // AMPITHEATRE -> South -> Entrance Hall
    connections[AMPITHEATRE][WEST] = -1;                // no connection west
    
    // SHED connections
    connections[SHED][NORTH] = -1;               // No connection north
    connections[SHED][EAST] = -1;                // No connection east
    connections[SHED][SOUTH] = MAIN_HOUSE;         // SHED -> South -> MAIN_HOUSE
    connections[SHED][WEST] = CAMP_ENTRANCE;     // SHED -> West -> Entrance Hall
    
    // DINING_PAVILION connections
    connections[DINING_PAVILION][NORTH] = -1;                // No connection north
    connections[DINING_PAVILION][EAST] = CAMP_ENTRANCE;      // DINING_PAVILION -> East -> Entrance Hall
    connections[DINING_PAVILION][SOUTH] = AMPITHEATRE;                // Dining pavilion -> South -> ampitheatre
    connections[DINING_PAVILION][WEST] = -1;                 // No connection west
    
    // MAIN_HOUSE connections
    connections[MAIN_HOUSE][NORTH] = SHED;         // MAIN_HOUSE -> North -> SHED
    connections[MAIN_HOUSE][EAST] = -1;               // No connection east
    connections[MAIN_HOUSE][SOUTH] = -1;              // No connection south
    connections[MAIN_HOUSE][WEST] = -1;               // No connection west
    
    // Game state
    int currentRoom = CAMP_ENTRANCE; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are at the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}