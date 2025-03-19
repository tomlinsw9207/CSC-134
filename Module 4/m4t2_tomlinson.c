/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/
// CSC 134
// m4t2
// Wendy "Lee" Tomlinson
// march 19 2025



#include "raylib.h"

// Draw one critter
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2); 

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    // The item I'm drawing
    int tile_width = 80;  // Width and height now define the "size" of the triangle
    int tile_height = 60;
    Color color1 = MAROON;
    Color color2 = DARKBLUE;
    int c_x = 0;
    int c_y = 0;               // current location of critter

    InitWindow(screenWidth, screenHeight, "Triangle Critter - Raylib Example");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        c_x += 2; // Move the critter horizontally
        
        if (c_x > screenWidth) {
            c_x = 0;
            c_y += tile_height;
        }
        //c_y += 1; // Move the critter vertically
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);
            // Draw our critter 
            for (int column = 0; column < screenHeight; column += tile_height * 2) {
           // DrawCritter(c_x, c_y, + column, tile_width, tile_height, color1, color2);
                for (int row = 0; row < screenWidth; row += tile_width * 2) {
                    DrawCritter(c_x + row, c_y + column, tile_width, tile_height, color1, color2);
                }
            }
            

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

// DrawCritter function definition
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2) {
    // Draw the body (triangle)
    Vector2 v1 = {c_x + tile_width / 2, c_y};               // Top vertex
    Vector2 v2 = {c_x, c_y + tile_height};                 // Bottom-left vertex
    Vector2 v3 = {c_x + tile_width, c_y + tile_height};    // Bottom-right vertex
    DrawTriangle(v1, v2, v3, color1);

    // Draw a circular eye near the top vertex
    float eye_radius = 8;  // Smaller radius for the eye
    Vector2 eye_position = {v1.x, v1.y + 15}; // Slightly below the top vertex
    DrawCircle(eye_position.x, eye_position.y, eye_radius, color2); // Outer eye (color2)

    // Add the pupil
    float pupil_radius = 4; // Smaller black circle as the pupil
    DrawCircle(eye_position.x, eye_position.y, pupil_radius, BLACK); // Pupil in the center
}
